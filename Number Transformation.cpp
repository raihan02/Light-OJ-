#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3005], nPrime;
bool mark[1005];
int factor[3005];
int ck;
void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
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
int dist[1005];
bool vis[1005];
int bfs (int src, int des)
{

    vis[src] = 1;
    dist[src] = 0;
    queue <int> q;

    q.push(src);
    while(!q.empty())
    {
        int x=  q.front();
        q.pop();
        if(x == des)
            return dist[x];
         if(mark[x] == 0)
            continue;

        vector <int> vc;
        int n= x;
        for(int i = 0; prime[i] <= sqrt(n); i++)
        {
            while(n % prime[i] == 0)
            {
                //factor[ck++] = prime[i];
                vc.push_back(prime[i]);
                n = n / prime[i];
            }
        }
        if(n > 1)
        {
            vc.push_back(n);
        }

        for(int i = 0; i < vc.size(); i++)
        {
            int v = x + vc[i];
            if(vis[v] == false && des >= v)
            {
                dist[v] = dist[x] + 1;
                 vis[v] = true;
                 q.push(v);

            }
        }
        vc.clear();
    }
    return -1;
}

int main()
{
    sieve(1005);
    int tes,o=0;
    scanf("%d", &tes);

    while(tes--)
    {
        memset(vis, false, sizeof vis);
        o++;
        memset(dist, 0, sizeof dist);

        int src,ds;
        scanf("%d %d", &src, &ds);
        printf("Case %d: %d\n",o, bfs(src,ds));

    }
}
