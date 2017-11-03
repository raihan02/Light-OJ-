#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes,o=0;
    cin >> tes;
    while(tes--)
    {
        o++;
        double v1,v2, v3,a1,a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;

        double ans = (v1 * v1) / (2.0 * a1) + (v2 * v2) / (2.0 * a2);
        double t1, t2;

        t1 = (v1/ a1);
        t2 = (v2/ a2);

        if(t1 < t2)
        {
            t1 = t2;

        }
        printf("Case %d: %.10lf %.10lf\n", o, ans, v3 * t1);


    }
}
