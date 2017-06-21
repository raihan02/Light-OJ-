#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 100000007;
ll catalan[1000006];
ll p_power[1000006];
ll c = 0;
int cnt = 0;
void init()
{
    for(ll i = 2; i <= 100000; i++)
    {
        ll res =  i * i;
        while(res <= 10000000000)
        {
            p_power[c++] = res;
            res = res * i;
        }
    }
    sort(p_power, p_power + c);
 
    c = unique(p_power, p_power + c) - p_power;
    p_power[c++] = 1000000000000000;
 
 
}
void fact()
{
    catalan[0] = 1;
    for(int i = 1; i <= 1000000; i++)
        catalan[i] = ( catalan[i -1] * i) % mod;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mods (ll n , ll p , ll m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        ll ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
int main()
{
    init();
    fact();
    int tes, o = 0;
    scanf("%d", &tes);
 
    while(tes--)
    {
        o++;
        ll a, b,l, tot, u;
        scanf("%lld %lld",&a, &b);
        u = upper_bound(p_power, p_power + c, b) - p_power;
        l = lower_bound(p_power, p_power + c, a) - p_power;
        tot = u -l;
        if(tot == 0)
            printf("Case %d: 0\n",o);
        else
        {
            ll ans = (catalan[tot + 1] * catalan[tot]) % mod;
            ans = mods(ans, mod-2, mod);
            ans = (catalan[2 * tot] * ans) % mod;
            printf("Case %d: %lld\n",o, ans); /// (ans1 * ans2));
 
        }
    }
}
