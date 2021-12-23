#include <stdio.h>
#include <string.h>

char s[1000001];

int div4();
int div100();
int div400();
int div15();
int div55();

int main()
{
    int a, b, c, d, e, l = 0;
    while(gets(s))
    {
        if(l)
            printf("\n");
        l = 1;
        a = div4();
        b = div100();
        c = div400();
        d = div15();
        e = div55();
        if(a == 1 && b == 0 || c == 1)
        {
            if(d == 1&& e == 1)
            {
                printf("This is leap year.\n");
                printf("This is huluculu festival year.\n");
                printf("This is bulukulu festival year.\n");
            }
            else if(d == 1)
            {
                printf("This is leap year.\n");
                printf("This is huluculu festival year.\n");
            }
            else if(e == 1)
            {
                printf("This is leap year.\n");
                printf("This is bulukulu festival year.\n");
            }
            else
            {
                printf("This is leap year.\n");
            }
        }
        else if(d == 1)
        {
            printf("This is huluculu festival year.\n");
        }
        else
            printf("This is an ordinary year.\n");
    }

    return 0;
}

int div4()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 4)
        {
            carry %= 4;
        }
    }
    if(carry == 0)
        return 1;
    else
        return 0;
}
int div100()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 100)
        {
            carry %= 100;
        }
    }
    if(carry == 0)
        return 1;
    else
        return 0;
}
int div400()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 400)
        {
            carry %= 400;
        }
    }
    if(carry == 0)
        return 1;
    else
        return 0;
}
int div15()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 15)
        {
            carry %= 15;
        }
    }
    if(carry == 0)
        return 1;
    else
        return 0;
}
int div55()
{
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        if(carry >= 55)
        {
            carry %= 55;
        }
    }
    if(carry == 0)
        return 1;
    else
        return 0;
}

