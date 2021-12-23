#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t;
    char s[100];
    scanf("%d ", &t);
    gets(s);
    if(strcmp(s, "of month") == 0){
        if(t == 31)
            printf("7\n");
        else if(t == 30)
            printf("11\n");
        else printf("12\n");
    }
    else{
        if(t == 5 || t == 6)
            printf("53\n");
        else printf("52\n");
    }

    return 0;

}
