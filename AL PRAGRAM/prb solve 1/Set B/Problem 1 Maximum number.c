#include <stdio.h>

int main()
{
    int n, m, i, x, max;
    while(1){
    scanf("%d%d", &n, &m);
    max = m;
    for(i = 0; i < n - 1; ++i){
        scanf("%d", &x);
        if(max < x){
           max = x;
        }
    }
    printf("%d\n", max);
    }

    return 0;
}
