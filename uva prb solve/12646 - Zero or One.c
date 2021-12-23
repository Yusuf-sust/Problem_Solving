#include <stdio.h>

int main()
{
    int x, y, z;
    while(scanf("%d%d%d", &x, &y, &z) == 3){
        if(x == y && x != z && y != z){
            printf("C\n");
        }
        else if(x == z && x != y && z != y){
            printf("B\n");
        }
        else if(x != y && x != z && y == z){
            printf("A\n");
        }
        else{
            printf("*\n");
        }
    }

    return 0;
}
