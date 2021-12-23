#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int t, n, i, j, c;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        c = 0;
        scanf("%d ", &n);
        gets(s);
        for(j = 0; j < n;)
        {
            if(s[j] == '.')
            {
                c++;
                j = j + 3;
            }
            else
                j++;
        }
        printf("Case %d: %d\n", i, c);
    }

    return 0;
}
