#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000];
    int i, j, l, sum;
    while(gets(s))
    {
        l = strlen(s);
        if(l == 0)
        {
            printf("\n");
            continue;
        }
        for(i = 0; i < l; ++i)
        {
            sum = 0;
            if(s[i] == '!')
                printf("\n");
            else if(isdigit(s[i]))
            {
                sum = 0;
                while(1)
                {
                    if(!isdigit(s[i]))
                        break;
                    sum += s[i] - '0';
                    i++;
                }
                for(j = 0; j < sum; ++j)
                {
                    if(s[i] == 'b')
                        printf(" ");
                    else
                        printf("%c", s[i]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
