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
    int t;
    sf("%d", &t);
    getchar();
    getchar();
    while(t--)
    {
        int cnt = 0;
        map <string, int> mp;
        set <string> st;
        string s1;
        getline(cin,s1);
        while(s1 != "")
        {
            mp[s1]++;
            cnt++;
            st.insert(s1);
            getline(cin,s1);
        }
        set <string> :: iterator it;
        for(it = st.begin(); it != st.end(); it++)
        {
            double av = ((double)mp[*it]*100.0)/(double)cnt;
            cout<<*it;
            pf(" %.4lf\n", av);
        }
        if(t)cout<<endl;
    }

    return 0;
}



