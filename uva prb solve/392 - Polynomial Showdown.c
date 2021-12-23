#include <stdio.h>

int main()
{
    int i, j, x, a[50];
    while(scanf("%d", &a[0]) == 1)
    {
        for(i = 1; i < 9; i++)
        {
            scanf("%d", &a[i]);
        }
        j = 8;
        x = 0;
        for(i = 0; i < 9; i++)
        {
            if(a[i] == 0)
                continue;
            if(x != 0)
            {
                if(a[i] > 0)
                    printf(" + ");
                else printf(" - ");
            }
            if(x == 0 && a[i] < 0)
                printf("-");
            if(a[i] < 0)
                a[i] = a[i] * -1;
            if(i != 7 && i != 8 )
            {
                if(a[i] != 1)
                    printf("%dx^%d", a[i], (j-i));
                else printf("x^%d", (j-i));
                x++;
            }
            if(i == 7)
            {
                if(a[i] != 1)
                    printf("%dx", a[i]);
                else printf("x");
                x++;
            }
            if(i == 8)
            {
                printf("%d", a[i]);
                x++;
            }
        }
        if(x == 0)
            printf("0\n");
        else printf("\n");
    }

    return 0;
}
