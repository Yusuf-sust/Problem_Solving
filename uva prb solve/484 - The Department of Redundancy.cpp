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



int main(){
    int a;
    vector<int> b;
    map<int,int> c;
    while(scanf("%d",&a)==1){
        if(c.find(a)==c.end()){
            c[a]=1;
            b.push_back(a);
        }
        else{
            c[a]+=1;
        }
    }
    for(int i=0;i<b.size();i++){
        printf("%d %d\n",b[i],c[b[i]]);
    }
    return 0;
}




