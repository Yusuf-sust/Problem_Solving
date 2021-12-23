#include <stdio.h>
#include <string.h>

char s[1000];

int div();

int main()
{
    while(gets(s))
    {
        if(strcmp(s,"0") == 0)
            break;
        printf("%d\n", div());
    }

    return 0;
}

int div()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 17)
        {
            carry %= 17;
        }
    }
    if(carry != 0)
        return 0;
    else
        return 1;
}
