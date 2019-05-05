#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
      double ox, oy, ax, ay, bx, by, ans;
      o++;
      cin >> ox >> oy >> ax >> ay >> bx >> by;
      double oa = sqrt(((ox - ax) * (ox - ax)) + ((oy - ay) * (oy - ay)));
      //cout<< oa << endl;
      double ab = sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by)));
      //cout<< ab << endl;
      double ob = sqrt(((ox - bx) * (ox - bx)) + ((oy - by) * (oy - by)));
      //cout<< ob << endl;
      double value = ((oa * oa) + (ob * ob) - (ab * ab)) / (2 * oa * oa);
      //cout<< value << endl;
      ans = acos(value);
      printf("Case %d: %.4lf\n",o, ans * oa);

    }
}
