/**
Name: Raihan Chowdhury
International Islamic University Chittagong 
Department of CSE, IIUC 
Topics: Articulation Point by dfs 
 ignore same articulation point 
**/
#include <bits/stdc++.h>
using namespace std;
int dis[1000];
int low[1000];
bool visit[1000];
int parent[10000];
vector <int> node[1000];
vector<int> ap;
int timer;
void dfs(int u)
{
    dis[u] = low[u] = ++timer;
    visit[u] = true;
    int v;
    int children = 0;
    for(int i = 0; i < node[u].size(); i++)
    {
        v = node[u][i];
        if(!visit[v])
        {
            children++;
            parent[v] = u;
            dfs(v);
            /// if backedge is found

            low[u] = min(low[u], low[v]);

            /// special condition , if u is root  and u has many child , then u is AP
            if(parent[u] == -1 && children > 1)
                ap.push_back(u);
            /// if root has not many child

            if(parent[u] != -1 && low[v] >= dis[u])
                ap.push_back(u);
        }
        else if(v != parent[u])
            low[u] = min(low[u], dis[v]);
    }
}
int main()
{
    memset(parent, -1, sizeof parent);
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }


    for(int i = 1; i <= n; i++)
    {
        if(visit[i] == false)
            dfs(i);
    }


    for(int i = 0; i < ap.size(); i++)
        cout<< ap[i] << " ";

    cout<< endl;
}
