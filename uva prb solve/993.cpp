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
    long n,a[1000],j,i,d,k;
    cin>>n;
    if(n==0)
    {
        cout<<10<<endl;
        return 0;
    }

    if(n<10)
    {
        cout<<n<<endl;
        return 0;
    }
    d=9;
    i=0;
    while(d>1)
    {
        while(n%d==0)
        {
            n/=d;
            a[i++]=d;
        }
        d--;
    }
    sort(a,a+i);
    if(n==1)
    {
        for(j=0; j<i; j++)
            cout<<a[j];
        cout<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}

