#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, leng, s[1000];
    scanf("%d ", &n);
    for(i = 1; i <= n; ++i){
        gets(s);
        leng = strlen(s);
        printf("Case %d: %d\n", i, leng);
    }

    return 0;
}
