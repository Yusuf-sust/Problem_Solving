#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[100], s2[100];
    int t, i, j;
    scanf("%d ", &t);
    for(i = 1; i <= t; ++i)
    {
        gets(s1);
        gets(s);
        if(strcmp(s1,s) == 0)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            int l = 0;
            for(j = 0; s1[j] != '\0'; ++j)
            {
                if(s1[j] == ' ')
                    continue;
                else
                {
                    s2[l] = s1[j];
                    l++;
                }
            }
            s2[l] = '\0';
            if(strcmp(s, s2) == 0)
                printf("Case %d: Output Format Error\n", i);
            else
                printf("Case %d: Wrong Answer\n", i);
        }
    }

    return 0;
}
