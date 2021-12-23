#include <stdio.h>
#include <string.h>

int a[110];
int maximum(int n)
{
    int curmax = -1, max = -10000000, i;
    for(i = 0; i < n; i++)
    {
        if(curmax < 0)
        {
            curmax = a[i];
        }
        else
            curmax += a[i];
        if(curmax > max)
            max = curmax;
    }

    return max;
}

int main()
{
    int i, result, max = -100000, j, k, n, s[110][110];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &s[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        memset(a, 0, sizeof(a));
        for(j = i; j < n; j++){
            for(k = 0; k < n; k++){
                a[k] += s[k][j];
            }
            result = maximum(n);
            if(result>max)
                max = result;
        }
    }
    printf("%d\n", max);

    return 0;
}


