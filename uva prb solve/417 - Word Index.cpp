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

int  main()
{
    map <string,int> mapper;

    int i,j,k,l,m,idx=0;

    for(i='a'; i<='z'; i++)
    {
        char s[]= {i,'\0'};
        mapper[s]=++idx;
    }

    for(i='a'; i<='z'; i++)
        for(j=i+1; j<='z'; j++)
        {
            char s[]= {i,j,'\0'};
            mapper[s]=++idx;
        }

    for(i='a'; i<='z'; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
            {
                char s[]= {i,j,k,'\0'};
                mapper[s]=++idx;
            }

    for(i='a'; i<='z'; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
                for(l=k+1; l<='z'; l++)
                {
                    char s[]= {i,j,k,l,'\0'};
                    mapper[s]=++idx;
                }


    for(i='a'; i<='z'; i++)
        for(j=i+1; j<='z'; j++)
            for(k=j+1; k<='z'; k++)
                for(l=k+1; l<='z'; l++)
                    for(m=l+1; m<='z'; m++)
                    {
                        char s[]= {i,j,k,l,m,'\0'};
                        mapper[s]=++idx;
                    }
    char a[10];
    while(scanf("%s",a))
    {
        if(mapper.find(a)!=mapper.end()) printf("%d\n",mapper[a]);
        else  printf("0\n");
    }

    return 0;
}
