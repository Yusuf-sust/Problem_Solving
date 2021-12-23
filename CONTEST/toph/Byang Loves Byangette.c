#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    if(strcmp(s, "Who loves Byang?") == 0)
    {
        printf("Byangette\n");
    }
    else if(strcmp(s, "Who loves Byangette?") == 0)
    {
        printf("Byang\n");
    }

    return 0;
}
