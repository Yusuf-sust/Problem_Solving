#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t, l1, l2, p;
    char s1[50], s2[50];
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        p = 1;
        gets(s1);
        gets(s2);
        l1 = strlen(s1);
        l2 = strlen(s2);
        if(l1 != l2)
        {
            printf("No\n");
        }
        else
        {
            for(j = 0; j < l1; ++j)
            {
                if(s1[j] != 'a' && s1[j] != 'e' && s1[j] != 'i' && s1[j] != 'o' && s1[j] != 'u')
                {
                    if(s1[j] != s2[j])
                    {
                        p = 0;
                        break;
                    }
                }
                else
                {
                    if(s2[j] != 'a' && s2[j] != 'e' && s2[j] != 'i' && s2[j] != 'o' && s2[j] != 'u')
                    {
                        p = 0;
                        break;
                    }
                }
            }
            if(p == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}
