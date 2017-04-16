#include <bits/stdc++.h>
using namespace std;
int arr1[1001], arr2[1001];
int dis[100][100];
void solve(int n)
{
    for(int i = 0; i <= n; i++)
        dis[i][0] =dis[0][i] = 0;
        int p;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(arr1[i -1] == arr2[j - 1])
                p = 1;
            else if(arr1[i -1] > arr2[j - 1])
                p = 2;
            else
                p = 0;
            dis[i][j] = max(max(dis[i][j-1] ,dis[i-1][j]), dis[i-1][j-1] +p);
        }
    }
}
int main()
{
    int tes,o=0;
    scanf("%d",&tes);
    while(tes--)
    {
        o++;
        int n;
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            cin >> arr1[i];
        for(int j = 0; j < n; j++)
            cin >> arr2[j];
        sort(arr1,arr1 + n);
        sort(arr2,arr2 + n);
        reverse(arr1, arr1 + n);
        reverse(arr2, arr2+n);
        solve(n);

        printf("Case %d: %d\n",o, dis[n][n]);
    }

}
