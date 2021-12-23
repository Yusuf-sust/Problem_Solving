#include <stdio.h>
#include <string.h>

int main()
{
    int sum, k, i, n, j;
    char s[100];
    int t;
    scanf("%d", &t);
    for(j = 1; j <= t; j++)
    {
        sum = 0;
        scanf("%d", &n);
        printf("Case %d:\n", j);
        for(i = 1; i <= n; ++i)
        {
            scanf("%s", s);
            if(s[0] == 'd')
            {
                scanf("%d", &k);
                sum += k;
            }
            else
            {
                printf("%d\n", sum);
            }
        }
    }

    return 0;

}

