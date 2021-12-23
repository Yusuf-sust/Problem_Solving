#include <stdio.h>
#include <string.h>

char s[100000];

int div();
int add(int n);

int main()
{
    int sum, count;
    while(gets(s))
    {
        if(strcmp(s, "0") == 0)
            break;
        count = 0;
        sum = div();
        if(sum)
        {
            while(1)
            {
                if(sum == 9)
                {
                    count++;
                    break;
                }
                count++;
                sum = add(sum);
                if(sum % 9 != 0)
                    break;
                if(sum == 9)
                {
                    count++;
                    break;
                }
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", s, count);
        }
        else
        {
            printf("%s is not a multiple of 9.\n", s);
        }
    }

    return 0;

}

int div()
{
    int sum = 0;
    int i, j, carry = 0, x, y;
    for(i = 0; s[i] != '\0'; ++i)
    {
        carry = carry * 10 + (s[i] - '0');
        sum += s[i] - '0';
        if(carry >= 9)
        {
            carry %= 9;
        }
    }
    if(carry == 0)
    {
        return sum;
    }
    else
        return 0;
}

int add(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
