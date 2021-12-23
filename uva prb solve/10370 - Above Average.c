#include <stdio.h>

int main()
{
    int n, m, i, j;
    double x, sum, ave, aa, c;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        sum = 0;
        scanf("%d", &m);
        double arr[m];
        for(j = 0; j < m; ++j)
        {
            scanf("%lf", &x);
            sum += x;
            arr[j] = x;
        }
        ave = sum / m;
        c = 0;
        for(j = 0; j < m; ++j)
            if(arr[j] > ave)
                c++;
        aa = ( c * 100) / m;
        printf("%.3lf%%\n", aa);
    }


    return 0;
}
