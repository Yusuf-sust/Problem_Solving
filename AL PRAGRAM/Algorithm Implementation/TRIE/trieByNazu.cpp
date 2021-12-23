#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<queue>
#include<utility>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<set>
#include<stack>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
#define ll int
#define inf 1000000000
#define pf printf
#define sf scanf
#define sq(x) ((x)*(x))
#define MAX 100009
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define memc(a,c) memset(a,'c',sizeof(a))
#define mod 1000000007
/*int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int flip(int N,int pos){return N= N ^ (1<<pos);}
int Least_Significant_Bit(int N){return N= N & (-N);}*/
int X[] = {0, 0, 1, 0, 0, -1};
int Y[] = {0, 1, 0, 0, -1, 0};
int Z[] = {1, 0, 0, -1, 0, 0};
struct node{
    ll next[54],cnt;
};
ll m;
node a[100007];

ll getid(char c)
{
    if(c>='a' && c<='z') return c-'a';
    return c-'A'+26;
}

void add(char *s)
{
    ll x=0;
    ll l=strlen(s);
    for(int i=0;i<l;i++){
        ll y=getid(s[i]);
        if(a[x].next[y]==0){
            a[x].next[y]=++m;
        }
        x=a[x].next[y];
    }
    a[x].cnt++;
}

ll sum(char *s)
{
    ll x=0;
    ll l=strlen(s);
    for(int i=0;i<l;i++){
        ll y=getid(s[i]);
        if(a[x].next[y]==0) return 0;
        x=a[x].next[y];
    }
    return a[x].cnt;
}


int main()
{
    ll i,j,k,l,x,y,z,t,n;
    char b[200];
    cin>>t;
    for(i=1;i<=t;i++){
        sf("%d",&n);
        m=0;
        mem(a,0);
        for(j=0;j<n;j++){
            sf("%s",b);
            l=strlen(b);
            if(l>2) sort(b+1,b+l-1);
            add(b);
        }
        sf("%d",&n);
        getchar();
        pf("Case %d:\n",i);
        for(j=0;j<n;j++){
            char c[10009];
            x=1;
            gets(c);
            char *p=strtok(c," ");
            while(p){
                char d[10009];
                strcpy(d,p);
                l=strlen(d);
                if(l>2) sort(d+1,d+l-1);
                x*=sum(d);
                p=strtok(NULL," ");
            }
            pf("%d\n",x);
        }
    }
    return 0;
}
