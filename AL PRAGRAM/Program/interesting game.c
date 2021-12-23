#include <stdio.h>
int main()
{
    int t, i, n, k, x, j, l, y, s1=0, s2=0;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
            scanf("%d %d %d",&n, &k ,&x);

            for(j=x; j<=(x+k-1); j++)
            {

                s1 = s1 + j;
            }

            for(l=1; l<=n; l++)
            {

                s2 = s2 + l;
            }

        y=s2-s1;

        printf("Case %d: %d\n", i, y);

        y=0;

    }

    return 0;
}
