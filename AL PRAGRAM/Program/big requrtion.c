#include <stdio.h>
#include <string.h>

int a[100][100];

int big(int i, int j);

int main()
{
    int i,j,max = -100,n,r,c;
    scanf("%d %d",&r,&c);
    memset(a, 0, sizeof(a));
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(a[i][j]==1)
            {
                a[i][j]=0;
                n = big(i,j);
            }
            if(max < n)
                max = n;
        }
    }
    printf("%d\n",max);



    return 0;
}

int big(int i, int j)
{
    int count=1;
    if(a[i-1][j-1]==1)
    {
        count++;
        a[i-1][j-1]=0;
        big(i-1,j-1);
    }
    else if(a[i-1][j]==1)
    {
        count++;
        a[i-1][j]=0;
        big(i-1,j);
    }

    else if(a[i-1][j+1]==1)
    {
        count++;
        a[i-1][j+1]=0;
        big(i-1,j+1);
    }
    else if(a[i][j-1]==1)
    {
        count++;
        a[i][j-1]=0;
        big(i,j-1);
    }

    else if(a[i][j+1]==1)
    {
        count++;
        a[i][j+1]=0;
        big(i,j+1);
    }
    else if(a[i+1][j-1]==1)
    {
        count++;
        a[i+1][j-1]=0;
        big(i+1,j-1);
    }

    else if(a[i+1][j]==1)
    {
        count++;
        a[i+1][j]=0;
        big(i+1,j);
    }
    else if(a[i+1][j+1]==1)
    {
        count++;
        a[i+1][j+1]=0;
        big(i+1,j+1);
    }
    return count;
}
