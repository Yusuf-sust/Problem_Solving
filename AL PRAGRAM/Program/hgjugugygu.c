#include <stdio.h>

int main()
{
    int x = 0, y = 0, z = 0;
    int a = 0, b = 0, c = 0;

    printf("(x = 1) || (y = 2) || (z = 3) = %d\n", (x = 1) || (y = 2) || (z = 3));
    printf("x = %d, y = %d, z = %d.\n\n", x, y, z);

    printf("(a = 1) || b || (c = 3) = %d\n", a || (b=1) || (c = 3));
    printf("a = %d, b = %d, c = %d.\n\n", a, b, c);

    return 0;
}

