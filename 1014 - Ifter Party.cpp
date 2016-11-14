#include <bits/stdc++.h>
#define sc(n) scanf("%d", &n)
using namespace std;
int arr[1000004];
int main()
{
    int tes, o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        int a, b;
        sc(a);
        sc(b);
        int c = 0;
        int k = a -  b;
        printf("Case %d:",o);
        if(k <= b)
            printf(" impossible\n");
        else
        {
            c = 0;
            for(int i = 1; i <= sqrt(k); i++)
            {
                if(k % i == 0)
                {
                    arr[c++] = i;
                    if(k / i == i)
                        continue;
                    arr[c++] = (k / i);

                }
            }
            sort(arr, arr + c);

            for(int i = 0; i < c; i++)
            {
                if(arr[i] > b)

                    printf(" %d", arr[i]);
            }
            printf("\n");
            memset(arr, 0 , sizeof arr);
        }
    }
}
