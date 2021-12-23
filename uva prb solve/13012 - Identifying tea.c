#include <stdio.h>

int main()
{
    int n, m, count, i;
    while(scanf("%d", &n) == 1){
        count = 0;
        for(i = 0; i < 5; ++i){
            scanf("%d", &m);
            if(m == n)
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
