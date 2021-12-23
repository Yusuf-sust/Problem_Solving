#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], ch;
    int i;
    gets(s);
    ch = 'A';
    for(i = 0; i < strlen(s); ++i)
    {
        if(s[i] == 'a' || s[i] == 'A'|| s[i] == 'e'|| s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o'|| s[i] == 'O'|| s[i] == 'u'|| s[i] == 'U')
        {
            char c = s[i];
            s[i] = ch;
            ch = c;
        }
    }
    for(i = 0; i < strlen(s); ++i)
    {
        if(s[i] == 'A')
        {
            s[i] = ch;
            break;
        }
    }
    puts(s);

    return 0;
}
