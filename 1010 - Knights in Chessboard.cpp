#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int m , n;
    int tes , o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        scanf("%d %d", &m, &n);
        int res  = m * n;
        if(m == 2 || n == 2)
        {
            int ans;
            if(m == 2)
              ans = n;
            else
                ans = m;
            if(ans % 4 == 2)
                ans = ans + 2;
            else if(ans % 4 == 0)
                    ans = ans;
            else //if(ans % 4 == 1)
                ans += 1;
            printf("Case %d: %d\n", o, ans);

        }
        else if( m == 1 || n == 1)
        printf("Case %d: %d\n", o, res);
        else if(res % 2 == 0)
            printf("Case %d: %d\n", o, res/2);
        else
            printf("Case %d: %d\n", o, res/2 + 1);
    }
}
