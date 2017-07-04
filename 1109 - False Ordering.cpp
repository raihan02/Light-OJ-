#include <bits/stdc++.h>
using namespace std;

int div (int n)
{
    int c= 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            c++;
            if(i == n / i)
                continue;
            c++;
        }
    }
    return c;
}
bool cmp (pair <int, int > a , pair <int , int > b)
{
    if(a.first != b.first) return a.first < b.first;
    else
        return a.second > b.second;
}
int main()
{
    int tes, o  = 0;
    vector < pair <int, int >  > v;
    for(int i = 1; i <= 1000; i++)
    {
        v.push_back(make_pair(div(i), i));
    }
    sort(v.begin(), v.end(), cmp);

    cin >> tes;
    while(tes--)
    {
        o++;
        int n ;
        cin >> n;
        printf("Case %d: %d\n",o, v[n -1].second);
    }
}
