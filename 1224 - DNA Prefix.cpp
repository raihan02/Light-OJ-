#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long int ll;
int mp[4];
ll mx;

struct node
{
    node *next[5];
    int endmark;
  node()
  {
      for(int i = 0; i < 4; i++)
       next[i] = NULL;
      endmark = 0;
  }
};
void Build_trie (char *str , int len , node *curr)
{
    int t;
    for(int i = 0; i < len; i++)
    {
        int id = mp[str[i]];

        if(curr-> next[id] == NULL)
        {
            curr->next[id] = new node();
        }

        curr = curr->next[id];
         ++curr->endmark;
         t = curr->endmark * (i + 1);
         if(mx < t) mx = t;
    }
}
void del(node *cur) {
    for(int i=0; i < 4; i++)
        if(cur -> next[i])
            del(cur -> next[i]);
    delete (cur);
}

void init()
{
    mp['A'] = 0;
    mp['C'] = 1;
    mp['G'] = 2;
    mp['T'] = 3;
}
int main()
{
    init();
    int tes, o = 0;
    char s[50000];
    scanf(" %d", &tes);
    while(tes--)
    {
        o++;


        node *root = new node();
        int num;
        scanf("%d", &num);
        for(int i = 0; i < num; i++)
        {
            scanf(" %s" ,s);
            Build_trie(s, strlen(s) , root);
        }

        printf("Case %d: %lld\n",o,mx);
        del(root);
        mx = 0;
    }

}
