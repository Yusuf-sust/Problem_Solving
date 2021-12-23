#include <stdio.h>
#include <string.h>


int main()
{
    char s[]= {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/','\0'};
    char s1[1000];
    int i, j;
    while(gets(s1))
    {
        for(i = 0; s1[i] != '\0'; ++i)
        {
            if(s1[i] == ' ' || s1[i] == '`' || s1[i] == 'Q' || s1[i] == 'A' || s1[i] == 'Z')
                s1[i] = s1[i];
            else
            {
                for(j = 0; s[j] != '\0'; ++j)
                {
                    if(s[j] == s1[i])
                    {
                        s1[i] = s[j-1];
                        break;
                    }
                }
            }
        }
        puts(s1);
    }

    return 0;
}
