#include <bits/stdc++.h>
using namespace std;
int mat[4][4];
const int mod = 10007;
int n, a, b, c;
void bigmod (int e)
{
    if (e <= 1) return;
    bigmod (e >> 1);
    int tt[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = 0;
            for (int k = 0; k < 4; k++) sum += (mat[i][k] * mat[k][j]) %mod;
            tt[i][j] = sum %mod;
        }
    }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            mat[i][j] = tt[i][j];


    if (e %2 == 1)
    {
        int temp[4][4];
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) temp[i][j] = 0;
        temp[0][0] = a;
        temp[0][1] = 0;
        temp[0][2] = b;
        temp[0][3] = c;
        temp[1][0] = 1;
        temp[2][1] = 1;
        temp[3][3] = 1;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int sum = 0;
                for (int k = 0; k < 4; k++) sum += (tt[i][k] * temp[k][j]) %mod;
                mat[i][j] = sum %mod;
            }
        }
    }
    /*
    printf("Iteration %d\n\n",c);
    for(int i = 0;  i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }*/

}

int main()
{
    int tes, o = 0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if(n <= 2){
            printf("Case %d: %d\n",o,0);
        continue;
        }
        if(n == 3)
        {
            printf("Case %d: %d\n", o , c%mod);
            continue;
        }
        
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                mat[i][j] = 0;
        mat[0][0] = a;
        mat[0][1] = 0;
        mat[0][2] = b;
        mat[0][3] = c;
        mat[1][0] = 1;
        mat[2][1] = 1;
        mat[3][3] = 1;
        bigmod(n-2);

         int res = mat[0][3] % mod;

         printf("Case %d: %d\n", o, res % mod);

    }

}
