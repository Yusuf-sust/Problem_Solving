#include <stdio.h>

int main()
{
    int i, t, x, y, z, TC = 1;
    scanf("%d", &t);
    for(i = 0; i < t; ++i){
        scanf("%d%d%d", &x, &y, &z);
        if((x > 20) || (y > 20) || (z > 20)){
            printf("Case %d: bad\n", TC++);
        }
        else{
            printf("Case %d: good\n", TC++);
        }
    }

    return 0;
}
