#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i, j, k, l, sq, t, len;
    char s[10001], s1[1000][1000];
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        gets(s);
        l = 0;
        j = 0;
        k = 0;
        len = strlen(s);
        sq = sqrt(len);
        if((sq * sq) != len)
            printf("INVALID\n");
        else
        {
            for(j = 0; j < sq; ++j)
            {
                for(k = 0; k < sq; ++k)
                {
                    s1[j][k] = s[l];
                    l++;
                }
            }
            for(j = 0; j < sq; ++j)
            {
                for(k = 0; k < sq; ++k)
                {
                    printf("%c", s1[k][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
