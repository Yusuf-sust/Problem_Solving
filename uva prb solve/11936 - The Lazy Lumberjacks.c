#include <stdio.h>

int main()
{
    int x, y, z, i, n;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d %d %d", &x, &y, &z);
        if(x + y <= z || x + z <= y || y + z <= x)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }

    return 0;
}
