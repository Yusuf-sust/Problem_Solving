#include <stdio.h>
#include <stdlib.h>

int ar[30000];

int sor(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b);
}

int main()
{
    int i, j, n, t, dis;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        dis = 0;
        scanf("%d", &n);
        for(j = 0; j < n; ++j)
        {
            scanf("%d", &ar[j]);
        }
        qsort(ar, n, sizeof(int), sor);
        for(j = n - 3; j >= 0; j -= 3)
        {
            dis += ar[j];
        }

        printf("%d\n", dis);
    }

    return 0;
}
