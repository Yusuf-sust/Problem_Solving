#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, m, n, l;
    char s[50][50], s1[100];
    scanf("%d %d ", &m, &n);
    for(i = 0; i < 2 * m; ++i)
    {
        scanf("%s", s[i]);
    }
    for(i = 0; i < n; ++i)
    {
        scanf("%s", s1);
        k = 1;
        l = strlen(s1);
        for(j = 0; j < 2 * m; j += 2)
        {
            if(strcmp(s1, s[j]) == 0)
            {
                printf("%s\n", s[j+1]);
                k = 0;
                break;
            }
        }
        if(k == 1)
        {
            if(s1[l - 1] == 'y' && (s1[l-2] != 'a' && s1[l-2] != 'e' && s1[l-2] != 'i' && s1[l-2] != 'o' && s1[l-2] != 'u'))
            {
                s1[l-1] = 'i'; s1[l] = 'e'; s1[l+1] = 's'; s1[l+2] = '\0';
                printf("%s\n", s1);
            }
            else if(s1[l-1] == 'o' || s1[l-1] == 's' || s1[l-1] == 'x' || (s1[l-2] == 'c' && s1[l-1] == 'h') || (s1[l-2] == 's' && s1[l-1] == 'h'))
            {
                s1[l] = 'e', s1[l+1] = 's', s1[l+2] = '\0';
                printf("%s\n", s1);
            }
            else
            {
                s1[l] = 's', s1[l+1] = '\0';
                printf("%s\n", s1);
            }
        }
    }

    return 0;
}
