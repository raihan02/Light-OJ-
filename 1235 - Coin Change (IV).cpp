#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
ll arr[35];
vector <ll> v1, v2;
ll n;
void fun1 (ll i, ll val)
{
    v1.push_back(val);
    if(i == n/ 2)
        return;
    fun1(i + 1, val);
    fun1(i + 1, val + arr[i]);
    fun1(i + 1, val + arr[i] + arr[i]);
}
void fun2 (ll i, ll val)
{
    v2.push_back(val);
    if(i == n)
        return;
    fun2(i + 1, val);
    fun2(i + 1, val + arr[i]);
    fun2(i + 1, val + arr[i] + arr[i]);
}
int main()
{
     int tes, c = 0;
     cin >> tes;
     while(tes--)
     {
         c++;
         ll k;
         cin >> n >> k;
         v1.clear();
         v2.clear();
         for(int i = 0; i < n; i++)
         {
             cin >> arr[i];
         }
         fun1(0,0);
         fun2(n/ 2, 0);
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        bool f = 0;
        for(int i = 0; i < v1.size(); i++)
        {
            int x = v1[i];

            bool fl =  binary_search(v2.begin(), v2.end(), k - x);

            if(fl == 1)
            {
                f = 1;
                break;
            }
        }
         if(f)
            printf("Case %d: Yes\n",c );
         else
            printf("Case %d: No\n", c);

     }
}
