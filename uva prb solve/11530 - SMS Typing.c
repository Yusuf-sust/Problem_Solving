#include <stdio.h>
#include <string.h>

int main()
{
    char s[111];
    int i, n, c, j;
    char ch;
    scanf("%d%c", &n, &ch);
    for(i = 0; i < n; ++i)
    {
        gets(s);
        c = 0;
        for(j = 0; s[j] != '\0'; ++j)
        {
            if(s[j] == 'a' || s[j] == 'd' || s[j] == 'g' || s[j] == 'j' || s[j] == 'm' || s[j] == 'p' || s[j] == 't' || s[j] == 'w' || s[j] == ' ')
                c += 1;
            else if(s[j] == 'b' || s[j] == 'e' || s[j] == 'h' || s[j] == 'k' || s[j] == 'n' || s[j] == 'q' || s[j] == 'u' || s[j] == 'x')
                c += 2;
            else if(s[j] == 's' || s[j] == 'z')
                c += 4;
            else if( s[j] == 'c' || s[j] == 'f' || s[j] == 'i' || s[j] == 'l' || s[j] == 'o' || s[j] == 'r' || s[j] == 'v' || s[j] == 'y')
                c += 3;
        }
        printf("Case #%d: %d\n", i+1, c);
    }

    return 0;
}
