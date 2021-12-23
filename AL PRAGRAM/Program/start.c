#include <stdio.h>

int main()
{
    int a = 1;
    start :
        printf("%d\n", a);
        a++;
        if(a <=100)
            goto start;

    return 0;
}
