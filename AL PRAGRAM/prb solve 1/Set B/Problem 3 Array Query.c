#include <stdio.h>

int main()
{
    int n, m, i, x, min, max, dif;
    while(1){
    scanf("%d%d", &n, &m);
    min = m;
    max = m;
    for(i = 0; i < n - 1; ++i){
        scanf("%d", &x);
        if(min > x){
           min = x;
        }
        if(max < x){
            max = x;
        }
    }
    dif = max - min;
    printf("%d\n", dif);
    }

    return 0;
}


