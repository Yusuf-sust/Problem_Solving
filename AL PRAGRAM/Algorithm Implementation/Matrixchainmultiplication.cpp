#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <deque>
#include <list>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define mod 1000
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define gcd(a,b) __gcd(a,b)
#define logab(a,b) (log(a) / lob(b))
#define mem(a,v) memset(a, v, sizeof(a))
#define m_p make_pair
#define all(v) (v.begin(), v.end())
#define loop(type, v, it) for(type::iterator it = v.begin(); it != v.end(); ++it)
#define rep(i, a, n) for(int i = a; i <= n; ++i)
#define rrep(i, a, n) for(int i = n; i>= 0; i--)
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);
#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int cas = 1;
int dxx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dyy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
struct matrix
{
    int row,col;
    int mat[5][5];
};
/*matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (int i = 0; i < r.row; i++) {
    for (int j = 0; j < r.col; j++) {
      int sum = 0;
      for (int k = 0; k < a.col;  k++) {
        sum += a.v[i][k] * b.v[k][j];
        sum %= mod;
      }
      r.v[i][j] = sum;
    }
  }
  return r;
}*/

matrix multiply(matrix a, matrix b)
{
    matrix r;
    r.row = a.row;
    r.col = b.col;
    for(int i = 1; i <= r.row; i++)
    {
        for(int j = 1; j <= r.col; j++)
        {
             int sum = 0;
             for(int k = 1; k <= a.col; k++)
             {
                 sum += a.mat[i][k]*b.mat[k][j];
                 sum %= mod;
             }
            r.mat[i][j] = sum;
        }
    }

    return r;

}

/*matrix power(matrix mat, int p) {
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1)
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}*/

matrix power(matrix a, int p)
{
    if(p == 1)return a;
    matrix ret = power(a, p/2);
    ret = multiply(ret,ret);
    if(p % 2)
    {
        ret = multiply(ret,a);
    }
    return ret;
}
int n, m;

int main()
{
    //sf1(n);
    matrix mat;
    mat.mat[1][1] = 1, mat.mat[1][2] = 1, mat.mat[2][1] = 1, mat.mat[2][2] = 0;
    mat.row = 2;
    mat.col = 2;
    sf1(m);

    mat = power(mat,m);

    for(int i = 1; i <= 2; i++)
    {
        for(int j = 1; j <= 2; j++)
        {
            pf("%d ", mat.mat[i][j]);
        }
        pf("\n");
    }



    return 0;
}


