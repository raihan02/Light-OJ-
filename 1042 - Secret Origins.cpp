#include <stdio.h>
#include <algorithm>
#include <iostream>
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
        s = "";
        scanf("%lld", &n);
        while(n)
        {
            if(n % 2 == 1)
                s += '1';
            else
                s += '0';
            n = n / 2;
        }
        s += '0';
        reverse(s.begin(), s.end());
        next_permutation(s.begin(), s.end());
        ll res = 0;
        for(int i = 0; i < s.length(); i++)
        {
            res  = res * 2 + s[i] - '0';
        }

        printf("Case %d: %lld\n", o, res);
        s.clear();
    }
}
