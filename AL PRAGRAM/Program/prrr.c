#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, root, flag, count = 0, n, pr, m;
    scanf("%d%d", &n, &m);
    for(i = n; i <= m; ++i){
        root = sqrt(i);
        flag = 1;
        for(j = 2; j <= root; ++j){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        pr = i;
        count += flag;
        if(flag)
            printf("%d\n", i);
    }
//    printf("%d\n", pr);

    return 0;
}

