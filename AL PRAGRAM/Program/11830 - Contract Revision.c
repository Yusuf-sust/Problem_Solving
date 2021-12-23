#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], ch;
    int i, l, f, g;
    while(scanf("%c %s", &ch, s) == 2)
    {
        f = 1;
        g = 0;
        if(ch == '0' && strcmp(s, "0") == 0)
            break;
        l = strlen(s);
        for(i = 0; i < l; ++i)
        {
            if(s[i] == ch)
                continue;
            if(s[i] > '0')
                g = 1;
            if(g)
            {
                f = 0;
                printf("%c", s[i]);
            }
        }
        if(f)
            printf("0");
        printf("\n");
        getchar();
    }

    return 0;
}
