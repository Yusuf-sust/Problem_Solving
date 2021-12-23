#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE_ARR 5000

int main()
{
    char a[SIZE_ARR], b[SIZE_ARR], temp[SIZE_ARR];
    int n, i, carry, j, t;
    scanf("%d", &n);

    for(i = 0; i < SIZE_ARR; ++i)
        a[i] = b[i] = temp[i] = '0';

    a[SIZE_ARR - 1] = '0';
    b[SIZE_ARR - 1] = '1';

    for(i = 1; i <= n; ++i)
    {
        carry = 0;
        for(j = SIZE_ARR - 1; j >= 0; --j)
        {
            t = a[j] - '0' + b[j] - '0' + carry;
            temp[j] = t % 10 + '0';
            carry = t / 10;
        }

        for(j = 0; j < SIZE_ARR; ++j)
            a[j] = b[j], b[j] = temp[j];
    }

    for(i = 0; i < SIZE_ARR; ++i)
        if(a[i] != '0')
            break;

    for(; i < SIZE_ARR; ++i)
        printf("%c", a[i]);
    printf("\n");

    return 0;
}
