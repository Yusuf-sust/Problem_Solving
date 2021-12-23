#include <stdio.h>
#include <stdlib.h>

int arr[10011];

int com(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b);
}

int main()
{
    int n, x;
    int i = 0, y, j, k;
    while(scanf("%d", &n) == 1)
    {
        arr[i] = n;
        i += 1;
        qsort(arr, i, sizeof(int), com);
        if(i % 2 == 1)
        {
            y = i / 2;
            x = arr[y];
            printf("%d\n", x);
        }
        else
        {
            y = i / 2;
            x = (arr[y] + arr[y - 1]) / 2;
            printf("%d\n", x);
        }
    }

    return 0;
}
