#include <stdio.h>

int main()
{
    int n, i, a, b, temp;
    scanf("%d", &n);
    a = 0;
    b = 1;
    for(i = 1; i <= n; ++i){
        temp = a;
        a = b;
        b = b + temp;
    }
     printf("%d\n", a);

    return 0;
}
