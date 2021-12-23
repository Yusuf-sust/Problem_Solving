#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, x, l;
    char s[1000];
    while(scanf("%d", &n) == 1 && n)
    {
        scanf("%s", s);
        l = strlen(s);
        if(n == 0 && l == 0)
            break;
        x = l / n;
        for(i = 1; i <= n; ++i)
        {
            for(j = i * x - 1; j > i * x - 1 - x; --j)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
