#include <bits/stdc++.h>
using namespace std;
int hist[100005];
string s[2002];
long long large_rectangle (int n)
{
    stack <int> st;
    int i = 0;
    long long mx = 0;
    long long large_area= 0;
    while(i < n)
    {
        if(st.empty() || hist[st.top()] <= hist[i]){
            st.push(i++);

        }
        else
        {
            int top = st.top();
            st.pop();

            if(st.size() > 0)
            {
                large_area = hist[top] * (i - st.top() -1);
            }
            else
            {
                large_area = hist[top] * i;
            }
            mx = max(mx, large_area);
        }
    }

    while(st.size() > 0)
    {
        int top = st.top();
        st.pop();
         if(st.size() > 0)
            {
                large_area = hist[top] * (i - st.top() -1);
            }
            else
            {
                large_area = hist[top] * i;
            }
            mx = max(mx, large_area);
    }
    return mx;
}
int main()
{
    int n;
    int tes,o=0;
    scanf("%d",&tes);

    while(tes--)
    {
        o++;
        //scanf("%d",&n);
        int r, c;
        cin >> r >> c;
        long long ans=0;
        memset(hist,0,sizeof hist);
        for(int i = 0; i < r; i++)
        {
            cin >> s[i];
            for(int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == '0')
                {
                    hist[j] = hist[j] + 1;
                }
                else
                    hist[j] = 0;
            }
            /*
            for(int k = 0; k < s[i].size(); k++)
            {
                cout<< hist[k] << " ";
            }
            cout<< endl;
            */


            ans = max(ans,large_rectangle(c));


        }
        printf("Case %d: %lld\n",o,ans);

    }
}
