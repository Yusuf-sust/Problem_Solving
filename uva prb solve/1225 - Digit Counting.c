#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, j, k, t, n, x, l;
    int arr[12];
    scanf("%d", &t);
    for(l = 0; l < t; ++l)
    {
        for(i = 0; i < 12; ++i)
            arr[i] = 0;
        scanf("%d", &x);
        for(j = 1; j <= x; ++j)
        {
            n = j;
            while(n > 0)
            {
                arr[n % 10]++;
                n /= 10;
            }
        }
        for(k = 0; k < 9; ++k)
        {
            printf("%d ", arr[k]);
        }
        printf("%d\n", arr[9]);
    }

    return 0;
}
