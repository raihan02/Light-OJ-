#include <bits/stdc++.h>
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
    ll n;
    int tes;
    int o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        int in = 20;
        vector <int> v;
        bool ck = false;
        scanf("%lld", &n);
        while(n > 0 )
        {
            if(in < 0)
            {
                ck = true;
                break;
            }

            if(n >= fact(in))
            {
                n = n - fact(in);
                v.push_back(in);
            }
            in--;
        }

        if(ck)
            printf("Case %d: impossible\n",o);
        else
        {
            if(v.size() == 1)
            {
                printf("Case %d: %d!\n",o, v[0]);
            }
            else{
              printf("Case %d: ",o);
            sort(v.begin(), v.end());
            for(int i = 0; i < v.size(); i++)
            {
                printf("%d!", v[i]);
                if( i != v.size() - 1)
                    printf("+");
            }
            cout<< endl;
            }
            
        }
        v.clear();
    }
}
