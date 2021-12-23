#include<stdio.h>
int main()
{
    int t,x1,y1,x2,y2,m;

    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {

        if(x1==0&&x2==0&&y1==0&&y2==0)
        {
            break;
        }

        if(x1==x2&&y1==y2)
        {
            m=0;
            printf("%d\n",m);
        }

        else if((x1==x2&&y1!=y2)||(y1==y2&&x1!=x2)||(x1-x2)==(y1-y2)||(x2-x1)==(y1-y2)||(x1-x2)==(y2-y1))
        {
            m=1;
            printf("%d\n",m);
        }


        else
        {
            m=2;
            printf("%d\n",m);
        }
    }

    return 0;
}

