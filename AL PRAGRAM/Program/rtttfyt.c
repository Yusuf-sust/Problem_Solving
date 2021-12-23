#include <stdio.h>

int main()
{
    int x = 1, y = 2;
    printf("%d %d\n", y, y = x++);
    printf("%d\n", x);
    printf("%d %d\n", ++x, ++y);

    return 0;
}
