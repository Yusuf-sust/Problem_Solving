#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], s1[100];
    int i, j, k;
    while(gets(s))
    {
        j = 0;
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(s[i] != ' ')
            {
                s1[j] = s[i];
                j++;
            }
            if(s[i] == ' ' || s[i+1] == '\0')
            {
                for(k = j - 1; k >= 0; --k)
                {
                    printf("%c", s1[k]);
                }
                j = 0;
                if(s[i+1] != '\0')
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
