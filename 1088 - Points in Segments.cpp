#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr1[100005];
ll bsearch (ll val , ll n)
{
    ll low = 0 , high = n;
    ll mid;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr1[mid] == val)
        {
            return mid;
        }
        if(arr1[mid] > val)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
ll bsearch1 (ll val , ll n)
{
    ll low = 0 , high = n;
    ll mid;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr1[mid] == val)
        {
            return mid;
        }
        if(arr1[mid] > val)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return high;
}
int main()
{
    int tes , o = 0;
    ///cin >> tes;
     scanf("%d", &tes);
    while(tes--)
    {
        ll n , q;
        scanf("%lld %lld", &n, &q);
        for(int i = 0;  i < n; i++)
        {
            scanf("%lld", &arr1[i]);
        }
        o++;
          printf("Case %d:\n",o);
        while(q--)
        {
            ll l , u;
            scanf("%lld %lld", &l ,&u);
            ll res1 , res2;
            res1=  bsearch(l , n - 1);
            res2 = bsearch1(u , n - 1);
            printf("%lld\n", (res2 - res1) + 1);

        }

    }
}
