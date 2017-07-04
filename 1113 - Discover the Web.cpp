#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
typedef long long int ll;
ll arr[21];
ll fact (int n)
{
    if(n == 0 || n == 1)
        return 1;
    arr[n] = n * fact(n - 1);
    return arr[n];
}
int main()
{
    int tes, o = 0;
    scanf("%d", &tes);
    while(tes--){
        o++;
           stack <string> f, b;
        string s = "http://www.lightoj.com/" , c;
       printf("Case %d:\n",o);
        while(cin >> c && c != "QUIT")
        {

            if(c == "BACK")
            {
                if(b.empty())
                    printf("Ignored\n");
                else
                {
                    f.push(s);
                    s = b.top();
                    b.pop();
                    cout<<s<< endl;
                }
            }
            else if(c == "FORWARD")
            {
                if(f.empty())
                {
                    cout<<"Ignored"<< endl;
                }
                else{
                    b.push(s);
                    s = f.top();
                    f.pop();
                    cout<<s<< endl;
                }
            }
            else
            {
               b.push(s);
               cin >> s;

               cout<<s<< endl;
               while(f.size())
                f.pop();
            }
        }
    }
}
