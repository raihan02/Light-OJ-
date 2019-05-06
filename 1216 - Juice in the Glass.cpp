#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
  int tes,o=0;
  double r1,r2,h,p;
  cin >> tes;
  while(tes--)
  {
      o++;
      cin >> r1 >> r2 >> h >> p;
     // cout<<p / h << endl;
      double r, v;
      r = r2 + (r1 - r2) * ((double)(p)/h);
      v = ((pi * p) / 3.0) * (r * r + r * r2 + r2 * r2);
      printf("Case %d: %.6lf\n", o, v);


  }
}
