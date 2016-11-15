#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll a;

ll rez (ll x)
{
    ll sum =0 ;
    while (x!=0)
    {
        x=x/5 ;
        sum+=x  ;
    }
    return sum ;
}

ll foo()
{
    ll low = 0 , high = 1000000000;
    ll res= 0;
    while(low <= high)
    {
       ll mid = (low + high) / 2;
        if(rez(mid) > a)
            high = mid - 1;
        else if(rez(mid) < a)
            low = mid + 1;
        else
        {
            res = mid;
            high = mid - 1;

        }

    }
    return res;
}
int main()
{
    int tes , o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        scanf("%lld", &a);
        o++;

        ll t = foo();
        if(t == 0)
            printf("Case %d: impossible\n",o);
        else
            printf("Case %d: %lld\n",o,t);
    }
}
