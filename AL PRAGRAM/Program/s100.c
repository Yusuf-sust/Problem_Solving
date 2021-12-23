#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);

    int a = 0, b = 0, c;

    for(i = strlen(str1) - 1; i >= 0; --i)
    {
        a += (str1[i] - '0') * pow(10, strlen(str1) - i - 1);
    }
    for(i = strlen(str2) - 1; i >= 0; --i)
    {
        b += (str2[i] - '0') * pow(10, strlen(str2) - i - 1);
    }
    c = a + b;



    printf("%d\n", c);

    return 0;
}

