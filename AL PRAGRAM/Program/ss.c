#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int i, prev = 0, flag = 0;
    for(i = 0; i < strlen(s); ++i)
    {
        if(s[i] == ' ' || s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            if(flag)
            {
                while(prev < i)
                {
                    printf("%c", s[prev++]);
                }
                printf("\n");
                flag = 0;
            }
            prev = i;
        }
        else
        {
            if(!flag)
            {
                prev = i;
                flag = 1;
            }
        }
    }
    while(prev < strlen(s))
    {
        printf("%c", s[prev++]);
    }
    printf("\n");

    return 0;
}
