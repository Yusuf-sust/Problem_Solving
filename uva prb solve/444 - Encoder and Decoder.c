#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000], ch;
    int i, j, len, k;
    while(gets(s))
    {
        len = strlen(s);
        for(i = len - 1; i >= 0;)
        {
            if(isalpha(s[i])|| s[i] == ' ' || s[i] == '!' || s[i] == ';' || s[i] == ':' || s[i] == '.' || s[i] == ',' || s[i] == '?')
            {
                k = 0;
                j = s[i];
                while(j > 0)
                {
                    printf("%d", j % 10);
                    j /= 10;
                }
                i--;
            }
            else
            {
                j = s[i] - '0';
                k = s[i-1]- '0';
                j = j * 10 + k;
                if(j >= 32)
                {
                    ch = (char)j;
                    printf("%c", ch);
                    i -= 2;
                }
                else
                {
                    j = j * 10 + (s[i-2] - '0');
                    ch = (char)j;
                    printf("%c", ch);
                    i -= 3;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
