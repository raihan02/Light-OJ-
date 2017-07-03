#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#define pi 2.0 * acos(0.0)
using namespace std;
typedef long long ll;
const ll rem = 1000003;
int main()
{
    string s;
    ll n;
    int tes, o= 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        double r, n;
        scanf("%lf %lf", &r, &n);
        double res = sin(pi / n);
        double ans = (res * r) / (res + 1);

        printf("Case %d: %.10lf\n", o,ans);
    }
}
