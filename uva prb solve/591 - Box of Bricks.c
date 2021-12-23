#include <stdio.h>

int main()
{
    int i, j, n, arr[100], sum, ave, r, TC = 1;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        sum = 0;
        ave = 0;
        r = 0;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        ave = sum / n;
        for(j = 0; j < n; ++j)
        {
            if(arr[j] > ave)
                r += arr[j] - ave;
        }
        printf("Set #%d\n", TC++);
        printf("The minimum number of moves is %d.\n", r);
        printf("\n");
    }

    return 0;
}
