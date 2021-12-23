#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[10000];
    int i, j, sum;
    while(gets(s))
    {
        sum = 0;
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(isalpha(s[i]))
            {
                if(!isalpha(s[i+1]))
                    sum += 1;
            }
            else
                continue;
        }
        printf("%d\n", sum);
    }
    return 0;
}
