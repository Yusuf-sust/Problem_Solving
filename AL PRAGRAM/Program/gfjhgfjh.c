#include <stdio.h>

int main()
{
    int a = 2147483647, b = -2147483648, x, y;
    x = a + 1;
    y = b - 1;
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}
