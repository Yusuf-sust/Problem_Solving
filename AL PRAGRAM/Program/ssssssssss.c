#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    gets(str);

    int i, prev = 0, flag = 0;

    for(i = 0; i < strlen(str); ++i)
    {
        if(str[i] == ' ' || str[i] == ',')
        {
            if(flag)
            {
                while(prev < i)
                {
                    printf("%c", str[prev++]);
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

    while(prev < strlen(str))
        printf("%c", str[prev++]);
    printf("\n");

    return 0;
}
