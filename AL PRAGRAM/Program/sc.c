#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, flag;
    char text[5000], pattern[100];
    gets(text);
    gets(pattern);
    for(i = 0; i <= strlen(text) - strlen(pattern); ++i){
        flag = 1;
        for(j = 0; j < strlen(pattern); ++j){
            if(pattern[j] != text[i + j]){
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("Yes, Position: %d\n", i);
        else{
            printf("No\n");
            break;
        }
    }

    return 0;

}
