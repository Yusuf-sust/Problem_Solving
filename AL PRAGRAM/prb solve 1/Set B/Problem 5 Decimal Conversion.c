#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i, len, sum;
    char s[2000];
    while(gets(s))
    {
        len = strlen(s);
        sum = 0;
        for(i = len - 1; i >= 0; --i)
        {
            sum += pow(2, len - i - 1) * (s[i] - '0');
        }
        printf("%d\n", sum);
    }

    return 0;
}

