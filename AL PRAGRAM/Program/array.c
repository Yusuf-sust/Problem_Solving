#include <stdio.h>

int main()
{
    int sum = 0, k, i, n;
    char chs[100];
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%s", chs);
        if(chs[0] == 'd')
        {
            scanf("%d", &k);
            sum += k;
        }
        else
        {
            printf("%d\n", sum);
        }
    }

    return 0;

}
