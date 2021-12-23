#include <stdio.h>

int main()
{
    unsigned int a, b, r;
    while(scanf("%d %d", &a, &b) == 2)
    {
        r = a^b;
        printf("%d\n", r);
    }

    return 0;
}

