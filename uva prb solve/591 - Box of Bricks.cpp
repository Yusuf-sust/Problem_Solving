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

    int n;
    int set=1;

    while(scanf("%d",&n) && n){

           vector <int> bricks;
           int brick;
           int media=0;
           int moves=0;

           for(int i=0;i<n;i++){
                 int brick;
                 scanf("%d",&brick);
                 media+=brick;
                 bricks.push_back(brick);
           }
           media/=n;
           for(int i=0;i<n;i++){
                 if(bricks[i]>media){
                     moves += bricks[i]- media;
                 }
           }
           printf("Set #%d\n", set);
           printf("The minimum number of moves is %d.\n\n", moves);
           set++;

    }


 return 0;
}
