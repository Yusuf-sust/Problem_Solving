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
    map <string,int> mp;
    map <string, string> mp1;
    //string s1, s2;
    char s[100], w1[100], w2[100];
    while(gets(s) && *s)
    {
        sscanf(s,"%s %s", w1, w2);
        string s1(w1), s2(w2);
        mp[s2] += 1;
        mp1[s2] = s1;
    }
    string s1;
    while(cin>>s1)
    {
        if(mp[s1])cout<<mp1[s1]<<endl;
        else cout<<"eh"<<endl;
    }

    return 0;
}


