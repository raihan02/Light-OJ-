#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes,o =0;
    cin >> tes;
    while(tes--)
    {
        double a, b, c, d, h, area, val1, val2, ans;
        o++;
        if(a < c)
            swap(a,c);

        cin >> a >> b >> c >> d;
        val1 = ((d * d) - (b * b) + (a * a) + (c * c) - (2 * a * c));
        val2 = (2 * a) - (2 * c);
        ans = val1 / val2;
        h = sqrt((d * d) - (ans * ans));
        area = (.5) * (a + c) * h;
        printf("Case %d: %.6lf\n", o, area);

    }
}
