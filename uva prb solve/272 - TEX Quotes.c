#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, c = 1;
    while(gets(s))
    {
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(s[i] == '"')
            {
                if(c % 2 == 1)
                {
                    printf("``");
                    c += 1;
                }
                else
                {
                    printf("''");
                    c += 1;
                }
            }
            else
                printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}
