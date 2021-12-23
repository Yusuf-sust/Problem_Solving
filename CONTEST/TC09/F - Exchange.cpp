#include <bits/stdc++.h>
using namespace std;
#define mod     1000000007
#define sz      100005
#define pi      acos(-1)
#define ll      long long
#define pb      push_back
#define pp      pop_back
#define pii     pair<int, int>
#define xx      first
#define yy      second
#define siz(x)  x.size()
#define mem(x)  memset(x,0,sizeof x)
#define sf      scanf
#define pf      printf


char s[100005];
char tk[100005];

map<char,int>mp;

int pp=0,l,id=0;

int cal(int start)
{
    int i,j;
    char mn=s[start];
    for(i=start; i<l; i++)
    {
        if(mp[s[i]]) continue;
        mn=min(mn,s[i]);
    }
    int pos=-1;
    //cout <<mn<<endl;
    for(i=start; i<l; i++)
    {
        if(s[i]!=mn) break;
        pos=i;
    }
    //cout <<pos<<endl;
    if(pos==-1)
    {
        /*char mx=s[start];
        for(i=start; i<l; i++)
        {
            mx=max(s[i],mx);
        }*/
        char mx=s[start];
        //cout <<mx<<endl;
        for(i=0; i<l; i++)
        {
            if(s[i]==mx) printf("%c",mn);
            else if(s[i]==mn) printf("%c",mx);
            else printf("%c",s[i]);
        }
        return 1;
    }
    if(!mp[s[start]])
    {
        mp[s[start]]=1;
    }
    pp=pos+1;
    return 0;
}

int main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/


    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        char ch1,ch2,mx;
        pp=id=0;
        int ckk=0;
        while(pp<l-1)
        {
            ckk=cal(pp);
            if(ckk) break;
        }
        if(!ckk) for(i=0; i<l; i++) printf("%c",s[i]);

        printf("\n");
        mp.clear();
    }
}
