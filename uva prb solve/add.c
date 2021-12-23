#include <stdio.h>
int main()
{
    long long int n,sum,cost,i,a[99999],j,b;
    while(scanf("%lld",&n)==1&&n!=0)
    {
        for(i=1;i<=n;i++)
            scanf("%lld",&a[i]);

        for(i=1;i<=n-1;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    b=a[j];
                    a[j]=a[j+1];
                    a[j+1]=b;
                }
            }
        }

        sum=a[1],cost=0;
        for(i=2;i<=n;i++)
        {
            sum=sum+a[i];
            cost=cost+sum;
        }
        if(n==1)
        cost=sum;
        printf("%lld\n",cost);
    }
    return 0;
}
