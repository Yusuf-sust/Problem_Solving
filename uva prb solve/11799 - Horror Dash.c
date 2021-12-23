#include <stdio.h>

int main()
{
    int n, i, j, m, TC = 1, req, a;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        req = 0;
        scanf("%d", &m);
        for(j = 0; j < m; ++j){
            scanf("%d", &a);
            if(a > req)
                req = a;
        }
        printf("Case %d: %d\n", TC++, req);
    }

    return 0;
}
