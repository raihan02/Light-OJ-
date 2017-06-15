#include <bits/stdc++.h>
using namespace std;
#define G 1
#define W 0
#define B 2
vector <int> g[10005];
int color[10005];
bool cycle;
map <string , int > mp;
void dfs (int u)
{
    color[u] = G;
   
    for(int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i];

        if(color[v] == W)
        {
            dfs(v);
        }
        else if(color[v] == G)
        {
            cout<<1 << endl;
            cycle = true;
            return;
        }
    }
    color[u] = B;
}
void d (int n)
{
    memset(color, 0, sizeof color);
    for(int i = 1; i <= n; i++)
    {
        if(cycle == true)
            return;
        if(color[i] == w)
            dfs(i);
    }
}
int main()
{
    int tes ,o = 0;
    scanf("%d",&tes);
    while(tes--)
    {
        o++;
        memset(color , 0, sizeof color);

        int in = 1 , q;
        string s1, s2;
        scanf("%d", &q);
        while(q--)
        {
          cin >> s1 >> s2;
          if(mp[s1] == 0)
           mp[s1] = in++;
          if(mp[s2] == 0)
            mp[s2] = in++;
            g[mp[s1]].push_back(mp[s2]);
        }


       bool f = 0;


        cycle = false;
         d(in-1);
         


       if(cycle == )
       {
           printf("Case %d: No\n", o);
       }
       else
       {
           printf("Case %d: Yes\n", o);
       }
       mp.clear();
        for(int i = 0; i <= in; i++)
        g[i].clear();

    }


}
