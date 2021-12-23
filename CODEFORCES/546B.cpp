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
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

int main()
{
    int n, a, c(0);
    cin >> n;
    int b[n];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(b, b + n);

    for (int i = 1; i < n; i++)
        if (b[i] == b[i - 1])
            b[i]++, c++;
        else if (b[i] < b[i - 1])
        {
            a = b[i - 1] - b[i];
            b[i] += a, c += a;
            b[i]++, c++;
        }

    cout << c << endl;
    return 0;
}

