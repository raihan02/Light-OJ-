#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
double arr[1000010];
void init()
{
    for(int i = 1; i <= 1000005; i++)
    {
        arr[i] =  arr[i - 1]+log((double) i ) ;
    }
}

int main()
{
    init();
    ll n , b, ans;
    int tes, o = 0;
    //cin >> tes;
    scanf("%d",&tes);
    while(tes--)
    {
        o++;
        scanf("%lld %lld", &n, &b);

        double res = arr[n] / log(double(b));

        res = floor(res) + 1;

        printf("Case %d: %.0lf\n",o, res);
    }
}
