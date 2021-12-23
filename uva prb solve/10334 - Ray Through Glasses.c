#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE_ARR 5001

char s[5009][5009];

int main()
{
    char a[SIZE_ARR], b[SIZE_ARR], temp[SIZE_ARR];
    int n, i, carry, j, t;

    for(i = 0; i < SIZE_ARR; ++i)
        a[i] = b[i] = temp[i] = '0';

    a[SIZE_ARR - 1] = '1';
    b[SIZE_ARR - 1] = '1';
    s[0][0] = '0';

    for(i = 1; i <= 1101; ++i)
    {
        carry = 0;
        for(j = SIZE_ARR - 1; j >= 0; --j)
        {
            t = a[j] - '0' + b[j] - '0' + carry;
            temp[j] = t % 10 + '0';
            carry = t / 10;
        }

        for(j = 0; j < SIZE_ARR; ++j)
        {
            s[i][j] = a[j];
            a[j] = b[j], b[j] = temp[j];
        }
    }

    while(scanf("%d", &n) == 1)
    {
        n += 2;
        for(i = 0; i < SIZE_ARR; ++i)
            if(s[n][i] != '0')
                break;
        for(; i < SIZE_ARR; ++i)
        {
            printf("%c", s[n][i]);
        }
        printf("\n");
    }

    return 0;
}


