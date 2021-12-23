#include <stdio.h>

int main()
{
    int i, j, n, m, arr[100], TC = 1;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &m);
        for(j = 0; j < m; ++j)
        {
            scanf("%d", &arr[j]);
        }
        m /= 2;
        printf("Case %d: %d\n", TC++, arr[m]);
    }

    return 0;
}
