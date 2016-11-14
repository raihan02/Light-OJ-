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
int main()
{

   int tes , o = 0;
   sc(tes);
   ll i , j;
   sieve(10000000);
   while(tes--)
   {
       o++;
       ll n;
       sll(n);

       ll cnt = 0;
       for(int i = 0; prime[i] <= n / 2; i++)
       {
           ll k = n - prime[i];
           if(mark[k] == 0)
            cnt++;
       }
       printf("Case %d: %lld\n", o, cnt);

   }

}
