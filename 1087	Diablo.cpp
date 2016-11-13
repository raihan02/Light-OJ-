#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int tes , o = 0;
    int a, n , q;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;

        scanf("%d %d", &n, &q);
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            v.push_back(a);
        }
        printf("Case %d:\n",o);
        while(q--)
        {
            char c ;
            int x;
            scanf(" %c %d" , &c, &x);
            if(c == 'c')
            {

                if(x > v.size())
                {
                    printf("none\n");
                }
                else
                {
                    x--;
                    printf("%d\n", v[x]);
                    v.erase(v.begin() + x);
                }
            }
            else
            {
                v.push_back(x);
            }
        }

    }
}
