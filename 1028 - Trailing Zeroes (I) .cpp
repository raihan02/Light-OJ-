#include <bits/stdc++.h>
using namespace std;
#define sll(n) scanf("%lld", &n)
#define sc(n) scanf("%d", &n)
typedef long long int ll;
ll prime[670000] , nPrime;
bool mark[10000001];
void sieve(ll n)
{
    ll i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for( i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
 
    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
ll prime_factor (ll n)
{
     ll res = 1;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        ll cnt = 0;
        while(n % prime[i] == 0)
        {
            cnt++;
            n = n / prime[i];
        }
        res = res * (cnt + 1);
    }
    if(n > 1)
    {
        res = res * 2;
    }
    return res - 1;
}
int main()
{
    sieve(10000000);
     int tes , o =0 ;
     scanf("%d", &tes);
     while(tes--)
     {
         o++;
         ll n;
         scanf("%lld", &n);
 
         printf("Case %d: %lld\n",o, prime_factor(n));
     }
}
