#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 100005
ll arr[mx];
struct info
{
    ll mxx , mnn;
};
info tree[mx * 3];
void init (ll node , ll b , ll e)
{
    if(b == e)
    {
        tree[node].mxx = arr[b];
        tree[node].mnn = arr[b];
        return;
    }
    ll l ,r , mid;
    l = node * 2;
    r = node * 2 + 1;
    mid = (b + e)/2;
    init(l, b,mid );
    init(r, mid + 1,  e);

    tree[node].mnn = min(tree[l].mnn , tree[r].mnn);
    tree[node].mxx = max(tree[l].mxx , tree[r].mxx);
    return;


}
info Q (ll node , ll b, ll e , ll i , ll j)
{
    if(i > e or j < b)
    {
       return tree[0];
    }
    if(b >= i && e <= j)
    {
        return tree[node];
    }
    ll l ,r, mid;
    l =  node * 2;
    r = node * 2 + 1;
    mid = (b + e) / 2;
     info x , y;
     x = Q(l, b ,  mid , i , j);
     y = Q(r, mid + 1, e, i , j);
    info ck;
    ck.mnn = min(x.mnn, y.mnn);
    ck.mxx = max(x.mxx , y.mxx);
    return ck;

}
int main()
{
    int tes;
    int o = 0;
    info ii;
    ll n , d;
    scanf("%d", &tes);
   while(tes--)
   {
       o++;
       scanf("%lld %lld", &n ,&d);

       for(int i = 1; i <= n; i++)
       {
           scanf("%lld", &arr[i]);
       }
        tree[0].mxx=INT_MIN;
        tree[0].mnn=INT_MAX;
        init(1 ,1 ,n);
       ll ans = 0;
       for(int i = 1; i <= n - d + 1; i++)
       {
            ii  = Q(1 ,1, n , i , i + d -1);
            ans = max(ans,ii.mxx - ii.mnn);
       }
       printf("Case %d: %lld\n", o,ans);
       memset(arr , 0 , sizeof arr);
       memset(tree, 0 , sizeof tree);
   }
}
