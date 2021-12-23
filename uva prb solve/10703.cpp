#include <bits/stdc++.h>
using namespace std;
int ara[501][501];
int main()
{
    int i,j,k,l,m,n,p,q,r,s,t,x1,x2,y1,y2;
    cin>>n>>m>>l;
    int cnt=n*m;
    while(l--)
    {
        cin>>x1>>y1>>x2>>y2;
        p=min(x1,x2);
        q=min(y1,y2);
        s=max(x1,x2);
        t=max(y1,y2);
        for(i=p;i<=s;i++){
            for(j=q;j<=t;j++){
                if(ara[i][j]==0){
                    ara[i][j]=1;
                    cnt--;
                }
            }
        }


    }
 cout<<cnt<<endl;

}
