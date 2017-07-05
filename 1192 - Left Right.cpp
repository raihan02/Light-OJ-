#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int tes;
   scanf("%d", &tes);
   int o = 0;
   while(tes--)
   {
       o++;

       int n;
       scanf("%d", &n);

       ll a, b , res = 0;
       for(int i = 0; i < n; i++)
       {
           scanf("%lld %lld", &a, &b);
           res += (b - a - 1);
       }
       if(res % 2 == 1)
        printf("Case %d: Alice\n",o);
       else
        printf("Case %d: Bob\n",o);
   }


}
