#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j;
    while(gets(s))
    {
        j = 0;
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V')
            {
                if(j != 1)
                {
                    j = 1;
                    printf("1");
                    continue;
                }
                else
                    continue;
            }
            else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' ||s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z')
            {
                if(j != 2)
                {
                    j = 2;
                    printf("2");
                    continue;
                }
                else
                    continue;
            }
            else if(s[i] == 'D' || s[i] == 'T')
            {
                if(j != 3)
                {
                    j = 3;
                    printf("3");
                    continue;
                }
                else
                    continue;
            }
            else if(s[i] == 'L')
            {
                if(j != 4)
                {
                    j = 4;
                    printf("4");
                    continue;
                }
                else
                    continue;
            }
            else if(s[i] == 'M' || s[i] == 'N')
            {
                if(j != 5)
                {
                    j = 5;
                    printf("5");
                    continue;
                }
                else
                    continue;
            }
            else if(s[i] == 'R')
            {
                if(j != 6)
                {
                    j = 6;
                    printf("6");
                    continue;
                }
                else
                    continue;
            }
            else
            {
                j = 0;
                continue;
            }
        }
        printf("\n");
    }

    return 0;
}
