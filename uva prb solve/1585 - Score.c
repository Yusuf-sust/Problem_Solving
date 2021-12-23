#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t, y, sum;
    char s[100];
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        gets(s);
        y = 0;
        sum = 0;
        for(j = 0; s[j] != '\0'; ++j)
        {
            if(s[j] == 'O')
            {
                y++;
            }
            else
                y = 0;
            sum += y;
        }

        printf("%d\n", sum);
    }

    return 0;
}
