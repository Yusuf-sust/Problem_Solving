#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, TC = 1, s[100];
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%s", &s);
        printf("Case %d : Hello %s\n", TC++, s);
    }

    return 0;
}
