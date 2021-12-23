#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    long long int r, a, b, l, i, j;
    char s[1000];
    while(gets(s))
    {
        if(strcmp(s, "0") == 0)
            break;
        r = 0;
        l = strlen(s);
        j = l;
        for(i = 0; i < l; ++i)
        {
            a = (s[i] - '0');
            r += a * (pow(2, j) - 1);
            j--;
        }
        printf("%lld\n", r);
    }

    return 0;

}
