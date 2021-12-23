#include <bits/stdc++.h>

    // header file

    #include <sstream>
    #include <queue>
    #include <stack>
    #include <set>
    #include <map>
    #include <cstdio>
    #include <cstdlib>
    #include <cctype>
    #include <complex>
    #include <cmath>
    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <utility>
    #include <vector>
    #include <algorithm>
    #include <bitset>
    #include <list>
    #include <string.h>
    #include <assert.h>
    #include <time.h>
    #include <fstream>
    #include <numeric>
    #include <cstring>

    using namespace std ;

    //define function

    #pragma comment(linker, "/STACK:667772160")
    #define forln(i,a,n) for(int i=a ; i<n ; i++)
    #define foren(i,a,n) for(int i=a ; i<=n ; i++)
    #define forg0(i,a,n) for(int i=a ; i>n ; i--)
    #define fore0(i,a,n) for(int i=a ; i>=n ; i--)
    #define pb push_back
    #define pp pop_back
    #define clr(a,b) memset(a,b,sizeof(a))
    #define sf1(a) scanf("%d",&a)
    #define sf2(a,b) scanf("%d %d",&a,&b)
    #define sf1ll(a) scanf("%lld",&a)
    #define sf2ll(a,b) scanf("%lld %lld",&a,&b)
    #define pii acos(-1.0)
    #define jora_int pair<int,int>
    #define jora_ll pair<long long,long long>
    #define max3(a,b,c) max(a,max(b,c))
    #define min3(a,b,c) min(a,min(b,c))
    #define Max 150000000+9
    #define sz 100000+7
    #define Mod 1000000007
    #define EPS 1e-10
    #define ll long long
    #define ull unsigned long long
    #define fs first
    #define sc second
    #define wait system("pause")
    #define sf scanf
    #define pf printf
    #define mp make_pair
    #define ps pf("PASS\n")
    #define Read freopen("C:\\Users\\RONIN-47\\Desktop\\input_output\\input.txt","r",stdin)
    #define Write freopen("C:\\Users\\RONIN-47\\Desktop\\input_output\\output.txt","w",stdout)
    //debug

    template<class T1> void deb(T1 e1)
    {
        cout<<e1<<endl;
    }
    template<class T1,class T2> void deb(T1 e1,T2 e2)
    {
        cout<<e1<<" "<<e2<<endl;
    }
    template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)
    {
        cout<<e1<<" "<<e2<<" "<<e3<<endl;
    }
    template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)
    {
        cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
    }
    template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)
    {
        cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
    }
    template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)
    {
        cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
    }
    struct edge
    {
        string str;
        bool operator < (const edge&p ) const
        {
            return str.size()<p.str.size() ;
        }
    };
    string str ;
    map<char,int>name;
    int ma=0;
    int s_len , node[900500][5] , id ;
    int val [900500][5];

    int new_node()
    {
        for(int i=0 ; i<5; i++){
            node[id][i] = 0 ;
            val[id][i]=0;
        }

        return id++ ;
    }

    void add(int cur)
    {
        int a ;
        int tx;
        int cnt=0;
        for(int i=0 ; i<str.size() ; i++)
        {
            char ch = str[i];
            a=name[ch];
       cnt++;
            if(node[cur][a] == 0)
                node[cur][a] = new_node();
                val[cur][a]++;
                if(cnt*val[cur][a]>ma)ma=cnt*val[cur][a];
    //  tx=cur;
            cur = node[cur][a] ;
        }
     //  val[tx][a]=2147483647;
    }

    int query(int cur)
    {
        int a;

        for(int i=0 ; i<str.size() ; i++)
        {
            a = str[i]-64;
    if(node[cur][a] == 0)return 1;
            if(val[cur][a]==2147483647 ){
                    return 0;
            }
            cur = node[cur][a] ;
        }
        return 1;//cont[cur] ;
    }


    int main()
    {
        int test,casio=1;
        scanf("%d",&test);
        name['A']=1;
         name['C']=2;
          name['G']=3;
           name['T']=4;
        while(test--){
        int tcase , n , m , len , root ;
            sf1(n);

            id = 0 ;

            root = new_node() ;
            int ck=0;
     // vector<edge>vc;
            for(int i=0  ; i<n ; i++)
            {
               cin>>str;
              add(root);
            }
        printf("Case %d: %d\n",casio++,ma);
        ma=0;
       // memset(val,0,sizeof val);
    //vc.clear();
    }

        return 0 ;
    }
