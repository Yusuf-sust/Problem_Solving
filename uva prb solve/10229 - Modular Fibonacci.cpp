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

ll mod;
struct matrix
{
    int row,col;
    int mat[5][5];
};

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
                sum += (a.mat[i][k])%mod*(b.mat[k][j])%mod;
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
    if(p == 0)
    {
        matrix pp;
        pp.mat[1][1] = 1;
        pp.mat[1][2] = 0;
        pp.mat[2][1] = 0;
        pp.mat[2][2] = 1;
        return pp;
    }
    if(p == 1)return a;
    matrix ret = power(a, p/2);
    ret = multiply(ret,ret);
    if(p % 2)
    {
        ret = multiply(ret,a);
    }

    return ret;
}

int main()
{
    //sf1(n);
    int n, m;
    while(sf2(n,m) == 2)
    {
        db x = pow(2.0,(db)m);
        mod = (ll)x;
        //cout<< mod<<endl;
        matrix mat;
        mat.mat[1][1] = 1%mod, mat.mat[1][2] = 1%mod, mat.mat[2][1] = 1%mod, mat.mat[2][2] = 0%mod;
        mat.row = 2;
        mat.col = 2;
        if(n == 0)
        {
            pf("0\n");
            continue;
        }
        if(n == 1 || n == 2)
        {
            pf("%d\n", 1%mod);
            continue;
        }
        matrix m = power(mat,n-1);
        int ans = m.mat[1][1]%mod;
        pf("%d\n", ans%mod);
    }

    return 0;
}



