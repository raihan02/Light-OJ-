#include <bits/stdc++.h>
using namespace std;
int arr[1001][1001];
int n;
int p[101][101];
int dp (int i, int j)
{
    if(i == n)
    {
        return arr[i][j];
    }
    int ret = 999999999;
    if(p[i][j] != -1){

        return p[i][j];

    }

    for(int k = 1; k <= 3; k++)
    {
        if(j == k)
            continue;
       ret = min(ret,dp(i+ 1, k));

    }
     ret += arr[i][j];
     p[i][j] = ret;

    return p[i][j];
}
int main()
{
    int tes,o=0;
    scanf("%d", &tes);

    while(tes--)
    {
        memset(p, -1, sizeof p);

        scanf("%d", &n);
        o++;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= 3; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int x = dp(0,0);

        printf("Case %d: %d\n",o, x);
    }
}
