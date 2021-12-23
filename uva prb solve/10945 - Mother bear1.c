#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char s[10000];
    while(gets(s))
    {
        if(strcmp(s,"DONE")==0) break;

        char s1[10000],s2[10000];
        int j=0;
        int i;
        for(i=0;i<strlen(s);i++)
        {
            if(isalpha(s[i]))
            {
                if(islower(s[i]))
                {
                    s1[j]=toupper(s[i]);
                    j++;
                }
                else
                {
                    s1[j]=s[i];
                    j++;
                }
            }
        }
        s1[j]='\0';
        for(i = 0, j = strlen(s1); i < strlen(s1); ++i){
            s2[i]=s1[j-1];
            --j;
        }
        s2[i]='\0';
        if(strcmp(s2,s1)==0)
        {
            printf("You won't be eaten!\n");
        }
        else
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}

