#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i, j, r, k, l, len;
    char s[1000], s1[1000];
    scanf("%d", &n);
    getchar();
    for(i = 1; i <= n; i++)
    {
        gets(s);
        printf("Case %d: ", i);
        len = strlen(s);
        for(j = 1; j < len ; j++)
        {
            r = 0;
            k = j;
            while(isdigit(s[j]))
            {
                r = r * 10 + (s[j] - '0');
                j++;
            }
            if(isalpha(s[k-1]))
            {
                for(l = 0; l < r; ++l)
                {
                    printf("%c", s[k-1]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
