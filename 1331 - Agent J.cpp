#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int tes, o = 0;
    cin >> tes;
    while(tes--)
    {
        o++;
        double perimeter,s, R1, R2, R3;
        cin >> R1>> R2 >> R3;
        double a, b, c, angle1, angle2 , angle3, area1, area2,area3, total_area;
        a = R1 + R2;
        b = R2 + R3;
        c = R1 + R3;
        perimeter = a + b + c;
        s = perimeter / 2.0;
        s = sqrt(s * (s - a) * (s- b) * (s - c));
        angle1 = ((a * a) + (c * c) - (b * b)) / (2 * a * c);
        angle1 = acos(angle1);
        angle2 = ((a * a) + (b * b) - (c * c)) / (2 * a * b);
        angle2 = acos(angle2);
        angle3 = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
        angle3 = acos(angle3);

        area1 = 0.5 * (R1 * R1) * angle1;
        area2 = 0.5 * (R2 * R2) * angle2;
        area3 = 0.5 * (R3 * R3) * angle3;
        total_area = area1+area2+area3;
        //cout<< s << " " << total_area << endl;
        printf("Case %d: %.6lf\n", o, s - total_area);

    }
}
