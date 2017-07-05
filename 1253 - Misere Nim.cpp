#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int tes, o =0;
   scanf("%d", &tes);

   while(tes--)
   {
       o++;
       int k;
       ll a ;

       scanf("%d", &k);
       ll sum = 0;
       int cnt = 0;
       for(int i = 1; i <= k; i++)
       {
           scanf("%lld", &a);
           if(a == 1)
           {
               cnt++;
           }
           sum ^= a;
       }

       if(cnt==k)
       {
            if(cnt % 2 == 1)
            {
                printf("Case %d: Bob\n",o);
            }
            else
                printf("Case %d: Alice\n" , o);
       }
       else
       {
           if(sum == 0)
            printf("Case %d: Bob\n", o);
           else
            printf("Case %d: Alice\n",o);
       }

   }

}
