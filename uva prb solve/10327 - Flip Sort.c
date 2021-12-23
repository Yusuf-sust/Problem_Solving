#include <stdio.h>

int main()
{
    int ar[10000], n, s, i, j, k;
    while(scanf("%d", &n) == 1)
    {
        s = 0;
        for(k = 0; k < n; ++k)
        {
            scanf("%d", &ar[k]);
        }
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < n - 1; ++j)
            {
                if(ar[j] > ar[j + 1])
                {
                    int temp = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = temp;
                    s++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", s);
    }

    return 0;
}
