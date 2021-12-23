#include <stdio.h>

int main()
{
    int n, m, i, x, min;
    while(1){
    scanf("%d%d", &n, &m);
    min = m;
    for(i = 0; i < n - 1; ++i){
        scanf("%d", &x);
        if(min > x){
           min = x;
        }
    }
    printf("%d\n", min);
    }

    return 0;
}

