#include <bits/stdc++.h>
using namespace std;
typedef long l;
bool ck (l n)
{
    if(n % 3 == 2)
        return 1;
    else
        return 0;
}
long fun (l n)
{
    return (n / 3) * 2 + ck(n);
}
int main()
{
    l a, b, tes,o=0;
    cin >> tes;

    while(tes--)
    {
        o++;
        cin >>a >> b;
       printf("Case %d: %ld\n",o, fun(b) - fun(a -1));

    }
}
