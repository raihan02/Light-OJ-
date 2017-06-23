#include <bits/stdc++.h>
#define mod 100000007
int dp[55][1001];
int n, K, coin[10001], ck[10001];
int coin_change(int i, int am)
{
    if(am == 0)
        return 1;
    if(am < 0)
        return 0;
    if(i == n)
        return 0;


    if(dp[i][am] != -1)
        return dp[i][am];
    int c1, c2;
    c1 = 0;
    for(int j = 1; j <= ck[i]; j++)
    {
        if(am - coin[i] * j >= 0 )
        {
            c1 += (coin_change(i + 1, am - coin[i] * j) % mod);
        }
        else
            break;
    }

    c2 = coin_change(i + 1, am) % mod;

    return dp[i][am] = (c2 + c1) % mod;

}
int main()
{
    int tes, o = 0;
    scanf("%d", &tes);

    while(tes--)
    {
        o++;
        memset(dp, -1,sizeof (dp));
        scanf("%d %d", &n,&K);

        for(int i = 0; i < n; i++)
            scanf("%d", &coin[i]);
        for(int i = 0; i < n; i++)
            scanf("%d", &ck[i]);
        printf("Case %d: %d\n",o, coin_change(0, K) % mod);
    }
}

