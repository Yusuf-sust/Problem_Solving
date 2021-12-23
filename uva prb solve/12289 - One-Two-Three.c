#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n, i, l;
    scanf("%d ", &n);
    for(i = 0; i < n; ++i){
        gets(s);
        l = strlen(s);
        if(l == 5){
            printf("3\n");
        }
        else if(s[0] == 't' && s[1] == 'w'){
            printf("2\n");
        }
        else if(s[0] == 't' && s[2] == 'o'){
            printf("2\n");
        }
        else if(s[1] == 'w' && s[2] == 'o'){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }

    return 0;
}
