#include <stdio.h>

int main()
{
    int n, s, d, a, b, i;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d%d", &s, &d);
        if(s < d || (s + d) % 2 == 1)
            printf("impossible\n");
        else{
        a = (s + d) / 2;
        b = (s - d) / 2;
        printf("%d %d\n", a, b);
        }
    }

    return 0;
}
