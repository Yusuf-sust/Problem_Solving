#include <stdio.h>

int main()
{
//    freopen("in.txt", "r", stdin);

    int i = 0, n, TC = 1;
    float sum = 0, ave, x;
    while(scanf("%d", &n) == 1)
    {
        i = 0;
        sum = 0;
        while( i<n)
        {
            scanf("%f", &x);
            sum = sum + x;
            i++;
        }
        ave = sum / n;
        printf("Case %d: %f\n", TC++, ave);
    }

    return 0;
}
