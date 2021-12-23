#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int long long a[100000];
    int a=0,b=1;
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<=n;i++)
    {
        a[i] = a+b+1;
        a=b;
        b = a[i];
    }
    scanf("%d",&n);
    printf("%lld %lld\n",a[n],a[n+1]);

    return 0;



}

