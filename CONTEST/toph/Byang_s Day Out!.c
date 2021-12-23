#include <stdio.h>

int main()
{
    int t, x, y, n, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d %d", &x, &y, &n);
        if((x + y) >= n)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
