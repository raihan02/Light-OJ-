#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[10000];
ll pos[30010];


int main()
{
    int tes,o =0;
    scanf("%d", &tes);

    while(tes--)
    {
        o++;
        int n , k;
        scanf("%d %d", &n, &k);
         for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        pos[0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = arr[i]; j <= k; j++)
            {
                pos[j] += pos[j - arr[i]] % 100000007;
            }
        }
        printf("Case %d: %d\n",o, pos[k] %100000007 );
        memset(arr, 0, sizeof arr);
        memset(pos, 0, sizeof pos);


    }
}
