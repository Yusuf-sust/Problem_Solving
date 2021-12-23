#include <stdio.h>

int main()
{
    int n, i, s, j;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
        {
            break;
        }
        if(n < 10){
           printf("    ");
        }
        else if(n >= 10 && n < 100){
            printf("   ");
        }
        else if(n >= 100 && n < 1000){
            printf("  ");
        }
        else if(n >= 1000 && n < 10000){
            printf(" ");
        }
        s = 0;
        for(i = 1; i < n; ++i)
        {
            if((n % i) == 0)
            {
                s += i;
            }
        }
        if(s > n)
        {
            printf("%d  ABUNDANT\n", n);
        }
        else if(s < n)
        {
            printf("%d  DEFICIENT\n", n);
        }
        else
        {
            printf("%d  PERFECT\n", n);
        }
    }

    printf("END OF OUTPUT\n");

    return 0;
}
