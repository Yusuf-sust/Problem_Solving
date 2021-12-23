#include <stdio.h>

int main()
{
    int x, y, z;
    while(1){
        scanf("%d %d %d", &x, &y, &z);
        if(x == 0 || y == 0 || z == 0)
            break;
        else if(x * x + y * y == z * z)
            printf("right\n");
        else if(x * x + z * z == y * y)
            printf("right\n");
        else if(y * y + z * z == x * x)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
