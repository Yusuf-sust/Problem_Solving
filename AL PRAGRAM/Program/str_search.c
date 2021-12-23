#include <stdio.h>
#include <string.h>

int main()
{
    char text[5000], pattern[100];

    gets(text);
    gets(pattern);

    int i, j, flag;

    for(i = 0; i <= strlen(text) - strlen(pattern); ++i)
    {
        flag = 1;
        for(j = 0; j < strlen(pattern); ++j)
        {
            if(pattern[j] != text[i + j])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            printf("Pos: %d\n", i);
        }
    }

    return 0;
}
