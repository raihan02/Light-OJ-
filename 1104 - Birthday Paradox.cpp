#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("R.txt","w+" ,stdout);
    int tes;
    cin >> tes;
    int o = 0;
    while(tes--)
    {
        o++;
        int x;
        cin >> x;
        double ans = 1.0, p;
        int i;
        int cnt = 0;
        for( i = x;; i--)
        {
            ans *= (double)(i)/(x);
            p = (1 - ans);
            cnt++;
            if(p >= 0.50)
                break;

        }
        //cout<< ans << endl;
       printf("Case %d: %d\n", o, cnt-1);

    }
}
