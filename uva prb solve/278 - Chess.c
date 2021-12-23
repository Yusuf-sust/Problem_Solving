#include <stdio.h>

int min(int m, int n);

int main()
{
    char p;
    int i, t, m, n, sum;
    scanf("%d", & t);
    getchar();
    for(i = 0; i < t; ++i)
    {
        scanf("%c %d %d", &p, &m, &n);
        if(p == 'Q' || p == 'r')
        {
            sum = min(m,n);
            printf("%d\n", sum);
        }
        else if(p == 'k')
        {
            sum = (m * n + 1) / 2;
            printf("%d\n", sum);
        }
        else if(p == 'K')
        {
            sum = ((m + 1)/ 2) * ((n + 1) / 2);
            printf("%d\n", sum);
        }
        getchar();
    }

    return 0;
}

int min(int m, int n)
{
    if(m < n)
        return m;
    else
        return n;
}
