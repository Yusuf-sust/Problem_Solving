#include <stdio.h>

int main()
{
    int count = 0, total;
    unsigned long long m, n, i, j;
    scanf("%llu %llu", &m, &n);
    for(j = m; j <= n; j++)
    {
        total = 0;
        if(i % 4 == 0)
            continue;
        else if(i > 2 && (i + 1) % 4 == 0)
            continue;
        if(total == 1)
            count++;
    }
    printf("%d\n", count);

    return 0;
}
