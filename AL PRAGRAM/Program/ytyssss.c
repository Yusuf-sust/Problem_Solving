#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s%s", str1, str2);

    int a = atoi(str1);
    int b = atoi(str2);

    printf("%d\n", a + b);

    return 0;
}
