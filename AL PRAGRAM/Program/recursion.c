#include <stdio.h>
#include <string.h>

int a[100][100], count;
void max(int i, int j);

int main()
{
    int i, j, k, r, c, maximum = 0;
    memset(a, 0, sizeof(a));
    scanf("%d %d", &r, &c);
    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            scanf("%d", &k);
            a[i][j] = k;
        }
    }
    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if(a[i][j] == 1)
            {
                a[i][j] = 0;
                count = 1;
                max(i,j);
                if(maximum < count)
                {
                    maximum = count;
                }
            }
        }
    }
    printf("%d\n", maximum);

    return 0;
}

void max(int i, int j)
{
    if(a[i-1][j-1] == 1)
    {
        count++;
        a[i-1][j-1] = 0;
        max(i-1,j-1);
    }
    if(a[i-1][j] == 1)
    {
        count++;
        a[i-1][j] = 0;
        max(i-1,j);
    }
    if(a[i-1][j+1] == 1)
    {
        count++;
        a[i-1][j+1] = 0;
        max(i-1,j+1);
    }
    if(a[i][j-1] == 1)
    {
        count++;
        a[i][j-1] = 0;
        max(i,j-1);
    }
    if(a[i][j+1] == 1)
    {
        count++;
        a[i][j+1] = 0;
        max(i,j+1);
    }
    if(a[i+1][j-1] == 1)
    {
        count++;
        a[i+1][j-1] = 0;
        max(i+1,j-1);
    }
    if(a[i+1][j] == 1)
    {
        count++;
        a[i+1][j] = 0;
        max(i+1,j);
    }
    if(a[i+1][j+1] == 1)
    {
        count++;
        a[i+1][j+1] = 0;
        max(i+1,j+1);
    }
}
