#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100], ch, x;
    int a, b, c, sum = 0, i;
    while(gets(s))
    {
        a = 0, b = 0, c = 0, i = 0;
        while(isdigit(s[i]))
        {
            a = a * 10 + (s[i] - '0');
            i++;
            if(!isdigit(s[i]))
            {
                ch = s[i];
                i++;
                break;
            }
        }
        while(isdigit(s[i]))
        {
            b = b * 10 + (s[i] - '0');
            i++;
            if(!isdigit(s[i]))
            {
                x = s[i];
                i++;
                break;
            }
        }
        if(s[i] == '?')
            continue;
        while(isdigit(s[i]) && s[i] != '\0')
        {
            c = c * 10 + (s[i] - '0');
            i++;
        }
        if(ch == '+')
        {
            if(a + b == c)
                sum++;
        }
        else if(ch == '-')
        {
            if(a - b == c)
                sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}
