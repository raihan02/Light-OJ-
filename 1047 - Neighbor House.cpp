#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[21][1003];
int arr[100][100];
int n;
int min_cost (int i , int j)
{
    int a, b, c;
    if(i == n)
        return arr[i][j];
    if(dp[i][j] != -1)
        return dp[i][j];
    if(j == 1)
    {
       a = 2;
       b = 3;
    }
    if(j == 2)
    {
        a = 1;
        b = 3;
    }
    if(j == 3)
    {
        a = 1;
        b = 2;
    }
    int x = arr[i][j] + min_cost(i + 1 , a);
    int y = arr[i][j] + min_cost(i + 1 , b);
    //printf("%d %d\n",x,y);
    dp[i][j] = min(x, y);

    return dp[i][j];
}
int main()
{
     int tes;
     cin >> tes;
     int o = 0;
    while(tes--)
    {
        o++;
        memset(dp , -1, sizeof dp);
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= 3; j++)
            {

                cin >> arr[i][j];
            }
        }
        int x = min(min_cost(1 , 1) , min(min_cost(1, 2) , min_cost(1, 3)));

        printf("Case %d: %d\n",o,x);
    }
}
