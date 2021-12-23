#include <stdio.h>
#include <math.h>

int main()
{
    int n, pr, flag, count;
    scanf("%d", &n);
    int i, j;
    count = 0;
    for(i = 2; count < n; ++i)
    {
        int root = sqrt(i);
        flag = 1;
        for(j = 2; j <= root; ++j)
            if(i % j == 0)
        {
            flag = 0;
            break;
        }
        pr = i;
//        if(flag)
//            printf("%d\n", i);
        count += flag;
    }

    printf("%d\n", pr);
}
