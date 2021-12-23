#include <stdio.h>

int main()
{
    int i = 10, j = -10;
    double x = 0.1, y = 2.75;
    char ch = 'N';
    printf("%d\n", !ch);
    printf("%d\n", !i);
    printf("%d\n", !j);
    printf("%d\n", !(-i));
    printf("%d\n", !(-j));
    printf("%d\n", !(i>i));
    printf("%d\n", !0-j);
    printf("%d\n", !!(x+y));
    printf("%d\n", !(.1-(x*!!j)));

    return 0;


}
