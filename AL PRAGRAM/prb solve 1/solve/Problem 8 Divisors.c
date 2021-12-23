#include <stdio.h>

int main()
{
    int n, i;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        printf("Divisors of %d: ", n);
        for(i = 1; i < n; ++i){
           if((n % i) == 0)
                printf("%d, ", i);
        }
        printf("%d\n", n);
    }

    return 0;
}
