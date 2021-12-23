#include <stdio.h>
#include <stdlib.h>

int A[2000001];
int sor(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b);
}

int main()
{
    int i, j, n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &A[i]);
        }
        qsort(A, n, sizeof(int), sor);
        for(i = 0; i < n - 1; ++i)
            printf("%d ", A[i]);
        printf("%d\n", A[n - 1]);
    }

    return 0;
}
