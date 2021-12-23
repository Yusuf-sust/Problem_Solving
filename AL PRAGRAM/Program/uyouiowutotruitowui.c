#include <stdio.h>

int main()
{
    int i = 10;
    float f = 5.5;
    char ch = 'n';
    printf("%d\n", f>5);
    printf("%d\n", (i+f)<=10);
    printf("%d\n", i +(f<=10));
    printf("%d\n", ch==110);
    printf("%d\n", ch != 's');
    printf("%d\n", ch>=10*(i+f));

    return 0;

}
