#include <stdio.h>

int main()
{
    int n, i, a, b;
    while(scanf("%d", &n) == 1){
        if(n == 0)
            break;
        a = 0;
        for(i = 1; i <= n; ++i){
            b = i * i + a;
            a = b;
        }
        printf("%d\n", b);
    }

    return 0;
}
