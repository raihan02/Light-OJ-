#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll phi[5000005];
int mark[5000005];
void Euler_Totient(int n)
{
    for(int i = 2; i <= n; i++)
    {
        phi[i] = i;
    }

    for(int i = 2; i <= n; i++)
    {
        if(!mark[i]) // if i is prime
        {
            for(int j = i; j <= n; j += i)
            {
                mark[j] = 1;
                ///phi[j] is divisable by i

                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }

    //sumArray[2] = 1;
    for(ll i = 3; i <= 5000001; i++)
    {
        phi[i] = phi[i] * phi[i];
        phi[i] += phi[i - 1];
    }
}

int main()
{
    Euler_Totient(5000002);
    //init();

    int tes, o = 0;
    scanf("%d", &tes);

    while(tes--)
    {
        o++;

        ll a, b;

        scanf("%llu%llu", &a, &b);

        ll res = phi[b] - phi[a - 1];

        printf("Case %d: %llu\n", o, res);
    }

}
