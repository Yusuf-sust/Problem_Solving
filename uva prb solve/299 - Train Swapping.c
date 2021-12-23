#include <stdio.h>

int main()
{
    int ar[100], t, l, i, j, s;
    scanf("%d", &t);
    for(i = 0; i < t; ++i)
    {
        s = 0;
        scanf("%d", &l);
        for(j = 0; j < l; ++j)
        {
            scanf("%d", &ar[j]);
        }
        int m, n;
        for(m = 0; m < l - 1; ++m)
        {
            for(n = m + 1; n < l; ++n)
            {
                if(ar[m] > ar[n])
                {
                    int temp = ar[m];
                    ar[m] = ar[n];
                    ar[n] = temp;
                    s += 1;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
    }

    return 0;
}
