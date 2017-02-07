#include <bits/stdc++.h>
using namespace std;
int dp[501][501];
string s;
int edit_dist (int l, int r)
{
    if(l >= r)
        return 0;
        if(dp[l][r] != -1)
            return dp[l][r];
    if(s[l] == s[r])
        dp[l][r] = edit_dist(l + 1 , r - 1);
    else
        dp[l][r] = 1 + min(edit_dist(l + 1, r) , edit_dist(l , r - 1));

    return dp[l][r];

}
int main()
{
    int tes, o =0;
    scanf("%d", &tes);
    while(tes--)
    {
        o++;
        memset(dp ,-1, sizeof dp);
       // string s;
        cin >> s;

        int x = edit_dist(0, s.length() - 1);
        printf("Case %d: %d\n",o, x);
    }
}
