#include <bits/stdc++.h>
using namespace std;
#define inf 1 << 28
vector <pair <int , int> > nd[1005];

int n;
int dfs (int u, int k)
{
    int x, w , nim=0;
   for(int i = 0; i < nd[u].size(); i++)
   {
       x = nd[u][i].first , w = nd[u][i].second;
      if(x == k)
        continue;
      if(w == 1)
        nim ^= (dfs(x,u) + 1);
      else if(w% 2 == 1)
        nim ^= (dfs(x,u) ^ 1);
      else
        nim ^= (dfs(x,u));

   }
   return nim;
}
int main()
{
    int tes , o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        scanf("%d", &n);
        for(int i = 0; i < n -1;i++)
        {
            int a, b, c;
            scanf("%d %d %d",&a, &b, &c);
            nd[a].push_back(make_pair(b,c));
            nd[b].push_back(make_pair(a,c));
        }

        int ans = dfs(0 , -1);
        if(dfs(0,-1))
            printf("Case %d: Emily\n",o);
        else
            printf("Case %d: Jolly\n",o);

        for(int i = 0 ; i <= n; i++)
            nd[i].clear();


    }
}
