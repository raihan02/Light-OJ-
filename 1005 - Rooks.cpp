#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dp[1000][1000];
ll ncr (ll n , ll r)
{
    if(n == r)
        return 1;
        if(r == 0)
            return 1;
    if( r == 1)
        return n;
    if(dp[n][r] != -1)
        return dp[n][r];
    dp[n][r] =  ncr(n -1, r)+  ncr(n - 1 , r - 1);
    return dp[n][r];
}
int main()
{
    int tes , o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        ll n , r;
        memset(dp , -1 , sizeof dp);
        scanf("%lld %lld", &n , &r);
        printf("Case %d: ",o);
        if(r > n)
        {
            printf("0\n");
        }
        else if(r == 0)
        {
            printf("%d\n",1);
        }
        else{
       ll sum = 1;
       for(int i = n - r + 1; i <= n; i++)
       {
           sum = sum  * i;
       }
       cout<< sum * ncr(n , r)<<  endl;
        }
    }
}
