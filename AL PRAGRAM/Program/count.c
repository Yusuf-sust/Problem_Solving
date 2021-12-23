#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while(n>1){
        if(n % 2 == 0)n = n / 2;
        else n = 3*n + 1;
        count = count + 1;
    }
    printf("%d\n", count);

    return 0;
}
