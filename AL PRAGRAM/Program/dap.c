#include <stdio.h>

int main()
{
    int i, j, x, t, sum;
    scanf("%d", &t);
    for(i =0; i < t; ++i)
    {
        sum = 1;
        for(j = 0; 1; ++j)
        {   j = sum;
            scanf("%d", &x);
            ++sum;

        }
        printf("%d\n", sum);

    }

    return 0;
}
