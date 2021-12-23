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
    char s[1000];
    vector<char> v1, v2;
    gets(s);
    v1.clear();
    v2.clear();
    for(int i = 0; s[i] != '\0'; i++)
        v1.pb(s[i]);
    gets(s);
    for(int i = 0; s[i] != '\0'; i++)
        v1.pb(s[i]);
    gets(s);
    for(int i = 0; s[i] != '\0'; i++)
        v2.pb(s[i]);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1.size() != v2.size())
    {
        pf("NO\n");
        return 0;
    }
    int f = 1;
    for(int i = 0; i < v1.size(); i++)
    {
        if(v1[i] != v2[i])
        {
            f = 0;
            pf("NO\n");
            break;
        }
    }
    if(f)
    {
        pf("YES\n");
    }


    return 0;
}

