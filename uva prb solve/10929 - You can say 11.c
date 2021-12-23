#include <stdio.h>
#include <string.h>

char s[10000];

int div();

int main()
{
    int r;
    while(gets(s))
    {
        if(strcmp(s,"0") == 0)
            break;
        r = div();
        if(r == 1)
            printf("%s is not a multiple of 11.\n", s);
        else
            printf("%s is a multiple of 11.\n", s);
    }

    return 0;
}

int div()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 11)
        {
            carry %= 11;
        }
    }
    if(carry != 0)
        return 1;
    else
        return 5;
}

