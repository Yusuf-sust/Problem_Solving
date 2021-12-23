#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <bits/stdc++.h>
#include <cstring>
#define PB push_back
#include <utility>
using namespace std ;
char  str[100400];
string str3;
int add()
{
    string str2;
    int ck=0;
    for(int i=0; str3[i]; i++)
    {
        if(str3[i]!='0')ck=1;
        if(ck==1)str2+=str3[i];

    }
    // cout<<str2<<endl;
    str3.clear();
    reverse(str2.begin(),str2.end());
    int c=1,i,j,k,l,m;
    for(i=0; str2[i]; i++)
    {
        l=str2[i]-48;
        l=l+c;
        m=l%10;
        c=l/10;
        str3+=m+48;
        // cout<<m<<endl;
    }
    char ch=c+48;
    if(c!=0)str3=str3+ch;
    reverse(str3.begin(),str3.end());
    for(i=0; str3[i]; i++)
    {
        str[i]=str3[i];
    }
    str[i]='\0';
    //cout<<str<<endl;
}

int makezero(int p,int q,int n)
{
    int i,j,k,l,m;
    for(i=p,j=q; i>=0; i--,j++)
    {
        k=str[i]-48;
        k=k+n;
        m=k%10;
        n=k/10;
        str[i]=m+48;
        str[j]=str[i];

    }
}
int pal(int p)
{
    int ck=0;
    int i,j,k,l,m,n,s,t=1;
    for(i=0,j=strlen(str)-1; i<=p; i++,j--)
    {
        if(i<p)
        {
            if(str[i]>=str[j])ck=1;
            else ck=0;
            if(str[i]>str[j])t=0;
            str[j]=str[i];
            //  cout<<ck<<" "<<i<<" "<<j<<endl;
        }
        else
        {
            if(ck==0)
            {
                if(str[i]<=str[j])
                {
                    k=str[i]-48;
                    k++;
                    m=k%10;
                    n=k/10;
                    str[i]=m+48;
                    str[j]=str[i];
                    makezero(i-1,j+1,n);
                }
                else if(str[i]>str[j])
                {
                    str[j]=str[i];
                }
                // printf("dsfdgf\n");
            }
            if(ck==1)
            {
                if(str[i]==str[j]&&t==1)
                {
                    k=str[i]-48;
                    k++;
                    m=k%10;
                    n=k/10;
                    str[i]=m+48;
                    str[j]=str[i];
                    makezero(i-1,j+1,n);

                }
                else if(str[i]>=str[j])
                {
                    str[j]=str[i];
                }
                else if(str[i]<str[j])
                {
                    k=str[i]-48;
                    k++;
                    m=k%10;
                    n=k/10;
                    str[i]=m+48;
                    str[j]=str[i];
                    makezero(i-1,j+1,n);


                }
//printf("sdhf\n");
            }

        }
    }


}




int main()
{
    //  string str;
    int test,casio=1;
    scanf("%d",&test);
    while(test--)
    {
        cin>>str3;
        add();
        int l=str3.size()/2;
        if(str3.size()%2==0)l--;
        string str2=str3;
        reverse(str2.begin(),str2.end());
        if(str3==str2)
        {
            printf("Case %d: ",casio++);
            cout<<str3<<endl;
        }
        else
        {
            pal(l);
            printf("Case %d: ",casio++);
            printf("%s\n",str);
        }
    }
    // cout<<str<<endl;
    // }

}
