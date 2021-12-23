#include <stdio.h>

int main()
{
    int m, n, arr[100], i, flag, j;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 1 || m == 1 || n == 0 || m == 0 || n < m)
        {
            printf("Boring!\n");
        }
        else
        {
            i = 0;
            do
            {
                if(n % m == 0 || n == 1)
                {
                    arr[i] = n;
                    n = n / m;
                    i++;
                    flag = 1;
                }
                else
                {
                    printf("Boring!\n");
                    flag = 0;
                    break;
                }
            }
            while(n > 0);
            if(flag)
            {
                for(j = 0; j < i - 1; ++j)
                {
                    printf("%d ", arr[j]);
                }
                printf("%d\n", arr[i - 1]);
            }
        }
    }

    return 0;
}
