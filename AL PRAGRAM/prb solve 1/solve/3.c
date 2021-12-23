#include <stdio.h>

int main()
{
    int i, sum = 0, TC = 1, n, x;
    while(scanf("%d", &n) == 1)
    {
        for(i = 0; i < n; i++){
            scanf("%d", &x);
            sum = sum + x;
        }
        printf("sum %d = %d\n", TC++, sum);
    }

    return 0;
}

