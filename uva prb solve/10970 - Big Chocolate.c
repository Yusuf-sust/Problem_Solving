#include <stdio.h>

int main()
{
    int n, m, i, j;
    while(scanf("%d %d", &n, &m) == 2)
    {
        i = m * n;
        j = i - 1;
        printf("%d\n", j);
    }

    return 0;
}
