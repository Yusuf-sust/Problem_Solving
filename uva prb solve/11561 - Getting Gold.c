#include <stdio.h>

int main()
{
    char ar[10000];
    int count, i, j, x, y;
    while(scanf("%d %d ", &x, &y) == 2)
    {
        count = 0;
        j = 0;
        for(i = 0; i < (x*y); ++i)
        {
            scanf("%c", &ar[i]);
        }
        for(i = 0; i < (x*y); ++i)
        {
            if(ar[i] == 'P')
                j = 1;
            if(j == 1)
            {
                if(ar[i] == 'G')
                    count += 1;
                else if(ar[i] == 'T')
                    break;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
