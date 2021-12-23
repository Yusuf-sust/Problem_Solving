#include <stdio.h>

int main()
{
    int x, y;
    while(scanf("%d", &x)==1){
        scanf("%d", &y);
        x = x^y;
        y = x^y;
        x = x^y;
        printf("%d %d\n", x, y);
    }

    return 0;
}
