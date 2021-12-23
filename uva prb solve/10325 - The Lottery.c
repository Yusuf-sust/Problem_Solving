#include <stdio.h>

int main()
{
    int n, m, i, x, j, count;
    while(scanf("%d%d", &n, &m) == 2)
    {
        count = 0;
        for(i = 1; i <= n; ++i)
        {
            for(j = 1; j <= m; ++j)
            {
                scanf("%d", &x);
                if((i % x) == 0){
                    count += 0;
                }
                else{
                    count += 1;
                }
            }
        printf("%d\n", count);
        }
    }

    return 0;
}
