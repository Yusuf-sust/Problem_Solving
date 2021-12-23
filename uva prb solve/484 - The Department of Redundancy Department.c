#include <stdio.h>

int main()
{
    int i, j, n, m;
    int s[10000];
    for(n = 0; scanf("%d", &s[n]) == 1; ++n);
    for(i = 0; i < n-1; ++i){
        if()
    }

    for(i = 0; i < n; ++i){
        m = 0;
        for(j = 0; j < n; ++j){
            if(s[i] == s[j]){
                m += 1;
            }
        }
        printf("%d %d\n", s[i], m);
    }

    return 0;
}
