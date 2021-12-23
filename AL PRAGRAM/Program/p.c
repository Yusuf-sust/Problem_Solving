#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, x, flag;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d", &x);
        flag = 1;
        if(x == 1)
            flag = 0;
        else{
            for(j = 2; j <= sqrt(x); ++j){
                if((x % j) == 0){
                    flag = 0;
                    break;
                }
            }
        }
        printf("Case %d: ", i+1);
        if(flag)
            puts("Yes");
        else{
            puts("No");
        }
    }

    return 0;
}
