#include <stdio.h>
#include <string.h>

int main()
{
    int ar[100], h, i, t, p, j;
    char s[100][1000];
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        h = -1;
        for(j = 0; j < 10; ++j)
        {
            scanf("%s %d", s[j], &ar[j]);
            if(ar[j] > h)
            {
                h = ar[j];
            }
        }
        printf("Case #%d:\n", i);
        for(j = 0; j < 10; ++j)
        {
            if(ar[j] == h)
            {
                printf("%s\n", s[j]);
            }
        }
    }

    return 0;
}
