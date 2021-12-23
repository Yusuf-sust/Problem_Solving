#include <bits/stdc++.h>
using namespace std;

int a[205][205] , n ,m , le[205][205] ,l[205][205] ;
bool  vis[205][205];
typedef struct
{
    int x,y;
}node;

queue <node> q;
vector <node> vec;

int bfs(int r, int c )
{
    int i, j, u, v  ;

    queue <node> q1;

    node an;

    an = {r, c };
    q1.push(an);

    while( !q.empty() )
    {
        node tem = q.front();
        q.pop();
        u = tem.x;
        v= tem.y ;
        if( a[u+1][v] != -1 && !vis[u+1][v] && u+1 < n   )
        {
            an= {u+1 , v };
            le[u+1][v] = le[u][v] + 1;
            vis[u][v] = 1 ;
            q.push(an);
        }
        if( a[u-1][v] != -1 && !vis[u - 1][v] && u-1 >= 0 )
        {
            an= {u - 1 , v };
            le[u-1][v] = le[u][v] + 1;
            vis[u][v] = 1 ;
            q.push(an);
        }
        if( a[u][v+1] != -1 && !vis[u][v+1] && v+1 <  m )
        {
            an= {u , v+1 };
            le[u][v+1] = le[u][v] + 1;
            vis[u][v] = 1 ;
            q.push(an);
        }
        if( a[u][v-1] != -1 && !vis[u][v-1] && v-1 >= 0 )
        {
            an= {u , v - 1 };
            le[u][v-1] = le[u][v] + 1;
            vis[u][v] = 1 ;
            q.push(an);
        }
    }

    for(i=0; i<vec.size() ;i++)
    {
        le[vec[i].x][vec[i].y] = 1;
    }


    while( !q1.empty() )
    {
        node tem = q1.front();
        q1.pop();
        u = tem.x;
        v= tem.y ;

        if( u+1 >= n || u-1 < 0 || v+1 >= m || v-1 < 0  )
        {
            return l[u][v]+1 ;
        }

        if( a[u+1][v] != -1 &&  l[u][v]+1 < le[u+1][v] && u+1 < n   )
        {
            an= {u+1 , v };
            l[u+1][v] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u-1][v] != -1 && l[u][v]+1 < le[u-1][v] && u-1 >= 0 )
        {
            an= {u - 1 , v };
            l[u-1][v] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u][v+1] != -1 && l[u][v]+1 < le[u][v+1] && v+1 <  m )
        {
            an= {u , v+1 };
            l[u][v+1] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u][v-1] != -1 && l[u][v]+1 < le[u][v-1] && v-1 >= 0 )
        {
            an= {u , v - 1 };
            l[u][v-1] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
    }

    return 0;

}


int bfs_s(int r, int c)
{
    int i, j, u, v  ;
    queue <node> q1;
    node an;
    an = {r, c };
    q1.push(an);
    while( !q1.empty() )
    {
        node tem = q1.front();
        q1.pop();
        u = tem.x;
        v= tem.y ;

        if( u+1 >= n || u-1 < 0 || v+1 > m || v-1 < 0  )
            return l[u][v]+1 ;
        if( a[u+1][v] != -1 && !vis[u+1][v] && u+1 < n   )
        {
            an= {u+1 , v };
            l[u+1][v] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u-1][v] != -1 && !vis[u - 1][v] && u-1 >= 0 )
        {
            an= {u - 1 , v };
            l[u-1][v] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u][v+1] != -1 && !vis[u][v+1] && v+1 <  m )
        {
            an= {u , v+1 };
            l[u][v+1] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
        if( a[u][v-1] != -1 && !vis[u][v-1] && v-1 >= 0 )
        {
            an= {u , v - 1 };
            l[u][v-1] = l[u][v] + 1;
            vis[u][v] = 1 ;
            q1.push(an);
        }
    }
    return 0;
}


int main()
{
    int  i, j , r, c, r1, c1 , test, tag, T = 1;
    cin >> test;
    while( test-- )
    {
    tag = 0;
    memset (le, 0, sizeof(le));
    memset( l, 0, sizeof(l));
    memset( vis , 0, sizeof(vis));
    cin >> n >> m ;
    char ch ;
    for(i=0; i<n ;i++)
    {
        getchar();
        for(j=0; j<m ;j++)
        {
            cin >> ch;

            if(ch == 'J')
            {
                r= i;
                c = j ;
                a[i][j] = 0;
            }
            else if( ch == 'F')
            {
                tag = 1;
                a[i][j] =  0 ;
                vis[i][j] = 1;
                node an = {i, j} ;
                vec.push_back(an);
                q.push(an);
            }
            else if(ch == '#')
                a[i][j] = -1;
            else
                a[i][j] = 0;
        }
    }
    int res;
    if( tag )
        res = bfs(r, c  );
    else
        res = bfs_s( r, c) ;
    printf("Case %d: ", T++);

    if( res == 0)
        cout << "IMPOSSIBLE" << endl;
    else
        cout <<  res << endl ;
//    q.clear();
    if( !tag )
    vec.clear();
    }

    return 0;
}
