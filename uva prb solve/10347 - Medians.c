#include<stdio.h>
#include<math.h>

int main()
{
    double t,p,r,s,u,v,temp,ans, x, y, z;

    while((scanf("%lf %lf %lf",&x,&y,&z)==3))
    {

        t=pow(x,2);
        p=pow(y,2);
        r=pow(z,2);

        s=pow(x,4);
        u=pow(y,4);
        v=pow(z,4);


        temp=2*((t*p)+(t*r)+(p*r))-(s+u+v);
        temp=sqrt(temp);

        ans=temp/3;

        if(ans>0)
            printf("%.3lf\n",ans);

        else
            printf("-1.000\n");

    }
    return 0;
}
