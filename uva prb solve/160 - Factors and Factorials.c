#include <stdio.h>

int main()
{
    int n, i, j, sum;
    int a[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        if(n < 10)
        {
            printf("  %d! =", n);
        }
        else if(n < 100)
        {
            printf(" %d! =", n);
        }
        else
            printf("%d! =", n);
        for(i = 0; i < 25; ++i)
        {
            sum = 0;
            if(a[i] > n)
                break;
            j = n;
            while(j >= a[i])
            {
                sum += j / a[i];
                j = j / a[i];
            }
            if(i == 15)
            {
                printf("\n      ");
                if(sum < 10)
                {
                    printf("  %d", sum);
                }
                else
                    printf(" %d", sum);
            }
            else
            {
                if(sum < 10)
                {
                    printf("  %d", sum);
                }
                else
                    printf(" %d", sum);
            }
        }
        printf("\n");
    }

    return 0;
}
