#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void isprime(int n);

int main()
{
    char s[1000];
    int sum, a, i;
    while(gets(s))
    {
        sum = 0;
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(isalpha(s[i]))
            {
                a = s[i];
                if(a > 96)
                    sum += a - 96;
                else if(a > 64)
                    sum += a - 38;
            }
            else
            {
                sum = 4;
                break;
            }
        }
        isprime(sum);
    }

    return 0;
}

void isprime(int n)
{
    int i, flag = 1;
    for(i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");

}
