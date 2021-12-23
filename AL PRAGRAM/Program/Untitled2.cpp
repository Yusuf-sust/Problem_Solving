#include <stdio.h>

int main()
{
    int i, n, sum = 0, ave, x;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        sum = sum + x;
    }
    ave = sum / n;
    printf("Average is %d\n", ave);

    return 0;
}
