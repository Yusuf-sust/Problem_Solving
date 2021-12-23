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
#define pf printf
#define sf scanf
#define sof sizeof



int main()
{
    int n, ar[100010], flag = 1, cnt = 1;
    char s[100010];
    scanf("%d", &n);
    getchar();
    for(int i = 1; i <= n; i++)
        scanf("%c", &s[i]);
    for(int i = 1; i <= n; i++)
        scanf("%d", &ar[i]);
    for(int i = 1; i <= n; i++)
    {
        if(s[cnt] == '>')
            cnt += ar[cnt];
        else cnt -= ar[cnt];
        if(cnt > n || cnt < 1)
        {
            pf("FINITE\n");
            flag = 0;
            break;
        }
    }
    if(flag)pf("INFINITE\n");


    return 0;
}

