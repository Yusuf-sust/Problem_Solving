#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, cnt, len;
    char str[1000], arr[1000];
    gets(str);
    len = strlen(str);
    cnt = 0;
    for(i = 0; i < (len / 2); ++i)
    {
        if(str[i] == str[len - i-i])
            cnt +=1;
        else
        {
            printf("Uh oh..\n");
        }
    }
    if(cnt == i)
    {
        printf("You won’t be eaten!\n");
    }

    return 0;
}
