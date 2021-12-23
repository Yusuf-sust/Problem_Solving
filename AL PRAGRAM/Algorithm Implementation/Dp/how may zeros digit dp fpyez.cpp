#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
long long save[17][2][2][17];
long long dp(int pos,int start,int small,int v)
{
    if(pos==vc.size()) return v;
    long long& ret=save[pos][start][small][v];
 
    if(ret!=-1) return ret;
    long long r=0;
    if(small)
    {
        if(!start) r+=dp(pos+1,0,small,v+1);
        else r+=dp(pos+1,1,1,v);
        for(int i=1; i<=9; i++) r+=dp(pos+1,0,small,v);
    }
    else
    {
        if(start==0)
        {
            if(vc[pos]>0) r+=dp(pos+1,0,1,v+1);
            else r+=dp(pos+1,0,small,v+1);
        }
        else
        {
            r+=dp(pos+1,1,1,v);
        }
        for(int i=1; i<vc[pos]; i++) r+=dp(pos+1,0,1,v);
        if(vc[pos]!=0) r+=dp(pos+1,0,0,v);
    }
    return ret=r;
}
 
int main()
{
    long long n,m;
 
 
 
    int t;
    scanf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        scanf("%lld %lld",&n,&m);
        n--;
        long long a1,a2;
        if(n<0) a1=0;
        else if(n<=9) a1=1;
        else
        {
            vc.clear();
            while(n!=0)
            {
                vc.push_back(n%10);
                n/=10;
            }
            reverse(vc.begin(),vc.end());
             memset(save,-1,sizeof save);
            a1=dp(0,1,0,0)+1;
        }
        if(m<=9) a2=1;
        else
        {
            vc.clear();
            while(m!=0)
            {
                vc.push_back(m%10);
                m/=10;
            }
            reverse(vc.begin(),vc.end());
             memset(save,-1,sizeof save);
            a2=dp(0,1,0,0)+1;
        }
        printf("Case %d: %lld\n",ca,a2-a1);
    }
 
}
 
