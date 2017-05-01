#include <bits/stdc++.h>
using namespace std;
#define check printf("Yes\n");
bool visit[505][505];
int cnt[505][505];
int c, row, col;
char maze[505][505];
//int cnt = 0;
void dfs(int i, int j)
{
    if(i < 0 || i >= row)
        return ;
    if(j < 0 || j >= col)
        return ;
    if(visit[i][j] == 1)
        return;
    visit[i][j] = 1;
    if(maze[i][j] == '#')
        return;

    if(maze[i][j] == 'C')
        c++;

    dfs(i, j + 1);
    dfs(i, j -1);
    dfs(i + 1, j);
    dfs(i - 1, j);
}
void dfs1(int i, int j)
{
    if(i < 0 || i >= row)
        return ;
    if(j < 0 || j >= col)
        return ;
    if(visit[i][j] == 1)
        return;
    visit[i][j] = 1;
    if(maze[i][j] == '#')
    {
        cnt[i][j] = 0;
        return;
    }

    cnt[i][j] = c;

    dfs1(i, j + 1);
    dfs1(i, j -1);
    dfs1(i + 1, j);
    dfs1(i - 1, j);
}
void setx()
{
    for(int i =0 ; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            visit[i][j] = 0;
        }
    }
}
void set1x()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cnt[i][j] = -1;
        }
    }
}
int main()
{
    int tes,  o = 0;
    scanf("%d", &tes);

    while(tes--)
    {
        o++;
        int q;

        scanf("%d %d %d", &row, &col, &q);


        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                scanf(" %c", &maze[i][j]);
            }
        }
        set1x();
        printf ("Case %d:\n", o);
        while(q--)
        {
            int x, y;
            scanf("%d %d",&x, &y);
            if(cnt[x - 1][y -1] != -1)
            {

                  printf("%d\n", cnt[x - 1][y -1]);

            }
            else
            {
                c = 0;
                setx();
                dfs(x - 1, y - 1);

                setx();
                dfs1(x - 1, y -1);

                printf("%d\n", cnt[x - 1][y -1]);

            }
        }
    }
}
