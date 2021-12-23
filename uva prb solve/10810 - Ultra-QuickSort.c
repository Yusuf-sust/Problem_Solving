#include <stdio.h>
int ar[1000000];

int main()
{
    int i, j, n, c;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            break;
        c = 0;
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &ar[i]);
        }
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < n - 1; ++j)
            {
                if(ar[j] > ar[j+1])
                {
                    int temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    c++;
                }
            }
        }
        printf("%d\n", c);
    }

    return 0;
}
