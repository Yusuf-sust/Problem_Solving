#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100];
    int i;
    while(gets(s))
    {
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
                s[i] = '2';
            else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
                s[i] = '3';
            else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
                s[i] = '4';
            else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
                s[i] = '5';
            else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
                s[i] = '6';
            else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
                s[i] = '7';
            else if(s[i] == 'V' || s[i] == 'T' || s[i] == 'U')
                s[i] = '8';
            else if(s[i] == 'Y' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Z')
                s[i] = '9';
        }
        puts(s);
    }

    return 0;
}
