#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("R.txt","w+" ,stdout);
    int tes;
    cin >> tes;
    int o = 0;
    while(tes--)
    {
        o++;
        int x;
        cin >> x;
        double ans = 1.0;
        int i;
        for( i = 1;; i++)
        {

            ans *= (double)(x-i)/(x);
            //cout<< ans << endl;
             if(ans <= 0.5)
                break;

        }
       printf("Case %d: %d\n", o, i);

    }
}
