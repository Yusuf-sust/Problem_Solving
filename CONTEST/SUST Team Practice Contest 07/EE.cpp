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
#define ll long long
#define ld long double
#define llu unsigned long long
#define inf 99194853094755497
#define pf printf
#define sf scanf
#define sf1(x) scanf("%lld",&x)
#define sf2(x,y) scanf("%lld %lld",&x,&y)
#define sf3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define pii pair<long long,long long>
#define sq(x) ((x)*(x))
#define MAX 100009
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define mod 1000000007

template<class T1> void deb(T1 e1)
{
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}

template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }
/*int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int flip(int N,int pos){return N= N ^ (1<<pos);}
int Least_Significant_Bit(int N){return N= N & (-N);}*/
// moves
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//ios_base::sync_with_stdio(0); cin.tie(0);
struct node{
    ll x,y;
    node(){}
    node(ll x,ll y):x(x),y(y){}
    bool operator < (const node & p) const
    {
        return x<p.x;
    }
};
ll dp[100004];
ll a[100004],n;
ll fun(ll x)
{
    //if(x>n || x<1) return inf;
    if(x==n) return 0;
    ll &r=dp[x];
    if(r!=-1) return r;
    r=inf;
    ll x1=x-a[x];
    ll x2=x+a[x];
    if(x1>0 && x1<=n && (a[x1]!=a[x])) r=min(r,fun(x-a[x])+1);
    if(x2>0 && x2<=n) r=min(r,fun(x+a[x])+1);
    //r=min(r,fun(x-a[x])+1);
    //r=min(r,fun(x+a[x])+1);
    return r;
}

int main()
{
    //freopen("jumping.in","r",stdin);
    ll i,j,k,l,x,y,z,t,m,l1,l2;
    cin>>t;
    for(i=1;i<=t;i++){
        sf1(n);
        for(j=1;j<=n;j++){
            sf1(a[j]);
        }
        mem(dp,-1);
        //deb(fun(3));
        for(j=1;j<=n;j++){
            x=fun(j);
            //for(k=1;k<=n;k++) pf("%lld ",dp[k]);
           // pf("\n");
            if(x>=inf) pf("-1\n");
            else pf("%lld\n",x);
        }
    }
    return 0;
}
