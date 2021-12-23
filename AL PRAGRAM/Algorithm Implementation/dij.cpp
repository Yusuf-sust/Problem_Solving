/// #define_SUST
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <new>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#define CLR(o) memset(o, 0, sizeof o)
#define CLR1(o) memset(o, -1, sizeof o)
#define MAX3(a, b, c) MAX(a , MAX(b,c))
#define MIN3(a, b, c) MIN(a , MIN(b,c))
#define takei(a) scanf("%d", &a)
#define takel(a) scanf("%ld", &a)
#define takell(a) scanf("%lld", &a)
#define takellu(a) scanf("%llu", &a)
#define sf scanf
#define ssf sscanf
#define pb push_back
#define PPP system("pause")
#define ok cout << "OK" <<endl;
#define pf printf
#define PI 2*acos(0)
using namespace std;

template <class T> T MAX(T a, T b) { return a>b?a:b;}
template <class T> T MIN(T a, T b) { return a<b?a:b;}
template <class T1> void deb(T1 x){ cout << "Debugging: " << x << endl;}
template <class T1, class T2> void deb(T1 x, T2 y){ cout << "Debugging: " << x << ", " << y << endl;}
template <class T1, class T2, class T3> void deb(T1 x, T2 y, T3 z) { cout << "Debugging: " << x << ", " << y << ", " << z << endl;}
const int xx[] = {0, 0, 1, -1, -1, 1, -1, 1};
const int yy[] = {1, -1, 0, 0, 1, 1, -1, -1};      // diagonal -> 8 horizontal/vertical->4
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};   // Knight moovs
#define SIZE 5005
class EDGE
{
public:
    int v, w;
    EDGE(int _v, int _w) {v=_v;w=_w;};
};

class DATA
{
public:
    int state, v, dist;
    DATA(int a, int b, int c)
    {
        state = a;
        v = b;
        dist = c;
    }
    bool operator < (const DATA p) const
    {
        if(dist == p.dist)
        {
            if(state==p.state)
                return p.v<v;
            else return p.state<state;
        }
        return p.dist<dist;
    }
};

vector <EDGE> path[SIZE];
bool visited[3][SIZE];
int level[3][SIZE];

void DIJKSTRA(int n)
{
    int i, j, k, u, v, w, s, alt;
    CLR(visited);
    for(i=1; i<=n; i++)
        level[1][i] = level[2][i] = 1<<29;
    //deb(level[1][1], level[0][1]);
    level[1][1] = 0;
    priority_queue<DATA> pq;
    pq.push(DATA(1, 1, 0));
    while(pq.size())
    {
        //deb(pq.size());
        s = pq.top().state;
        u = pq.top().v;
        w = pq.top().dist;
        pq.pop();
        //deb(s, u, w);
        if(s==2 && u == n-1) return;
        if(visited[s][u]) continue;
        visited[s][u] = 1;
        for(i=0; i<path[u].size(); i++)
        {
            k = path[u][i].v;
            alt = path[u][i].w + w;
            if(alt < level[1][k])
            {
                level[2][k] = level[1][k];
                level[1][k] = alt;
                pq.push(DATA(1, k, alt));
                pq.push(DATA(2, k, level[2][k]));
            }
            else if(alt > level[1][k] and alt <level[2][k])
            {
                level[2][k] = alt;
                pq.push(DATA(2, k, alt));
            }
        }
    }
    return;
}

int main()
{
    // time_t t1=clock();
#ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
    freopen("input.txt","r",stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ///                                    MAIN
     int t, keis=0, r, u, v, n, w, i, j;
     takei(t);
     while(t--)
     {
         takei(n);
         takei(r);
         i = ++n;
         while(i--) path[i].clear();
         while(r--)
         {
             takei(u);
             takei(v);
             takei(w);
             path[u].pb(EDGE(v, w));
             path[v].pb(EDGE(u, w));
         }
         DIJKSTRA(n);
         pf("Case %d: %d\n", ++keis, level[2][n-1]);
     }
    /* Coding is FUN  */
    ///                                    ENDD
    // time_t t2=clock();
    // cout << " My time: " <<(t2-t1) << endl;;
    return 0;
}
