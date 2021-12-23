#include  <stdio.h>

int main()
{
    int i = 0, n, TC = 1;
    float sum = 0, ave, x;
    while(scanf("%d", &n) == 1)
    {
        for(i = 0; i<n; i++)
        {
            scanf("%f", &x);
            sum = sum + x;
        }
        ave = sum / n;
        printf("Case %d : %f\n", TC++, ave);
    }

    return 0;
}


