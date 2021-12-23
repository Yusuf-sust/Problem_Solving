#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 4;
    char ch = 'N';
    printf("%d\n", x && y && z);
    printf("%d\n", x < y && y > z);
    printf("%d\n", 'A' <= ch && ch <= 'Z');
    printf("%d\n", (x = 0) && (y = 4));

    return 0;
}
