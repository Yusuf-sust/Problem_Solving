#include <stdio.h>

int main()
{
    int a, b, i, n;
    scanf("%d", &n);
    a = 1;
    b = 1;
    for(i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        int temp = a;
        a = b;
        b = b + temp;
    }

    return 0;
}

