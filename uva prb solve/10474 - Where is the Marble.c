#include <stdio.h>

int ar[100000];

void found(int x, int n);

int main()
{
    int i, j, n, q, x, T = 1;
    while(scanf("%d %d", &n, &q) == 2)
    {
        if(n == 0 && q == 0)
            break;
        printf("CASE# %d:\n", T++);
        for(i = 0; i < n; ++i)
        {
            scanf("%d", &ar[i]);
        }
        for(i = 0; i < n - 1; ++i)
        {
            for(j = i + 1; j < n; ++j)
            {
                if(ar[i] > ar[j])
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
        for(i = 0; i < q; ++i)
        {
            scanf("%d", &x);
            found(x,n);
        }
    }

    return 0;
}

void found(int x, int n)
{
    int i, p;
    for(i = 0; i < n; ++i)
    {
        if(x == ar[i])
        {
            p = 1;
            break;
        }
        else
            p = 0;
    }
    if(p == 1)
    {
        printf("%d found at %d\n", x, i+1);
    }
    else
    {
        printf("%d not found\n", x);
    }
}
