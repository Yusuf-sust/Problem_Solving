#include <stdio.h>

int main()
{
    int i, n, x;
    double sum = 0, ave;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        sum = sum + x;
    }
    ave = sum / n;
    printf("Average is %lf\n", ave);

    return 0;
}

