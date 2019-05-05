#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
        o++;
        ll x1, y1,z1, x2,y2,z2;

        ll n;
        cin >> n;
        ll mx1 = 0, my1 = 0, mz1 = 0, mx2 = 9999999999, my2 =9999999999, mz2 = 9999999999;

        while(n--)
        {
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            mx1 = max(mx1, x1);
            my1 = max(my1, y1);
            mz1 = max(mz1, z1);
            mx2 = min(mx2, x2);
            my2 = min(my2, y2);
            mz2 = min(mz2, z2);
        }
         // cout<< mx1 <<  " " << my1 << " " << mz1 << " " << mx2 << " " << my2 <<  " " << mz2 << endl;
        ll res = (mx2 - mx1) * (my2 - my1) * (mz2-mz1);

        if(res > 0)
             printf("Case %d: %lld\n",o, res);
        else
            printf("Case %d: 0\n",o);
    }
}
