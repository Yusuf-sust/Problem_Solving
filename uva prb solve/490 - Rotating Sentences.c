#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[1000][1000], s1[1000];
    int i = 0, len, max = -1, k, j = 0;
    freopen("k.text", "w", stdin);
    while(gets(s1)){
        len = strlen(s1);
        if(max < len)
            max = len;
        strcpy(s, s1);
        i++;
    }
    for(k = 0; k < len; ++k){
        for(j = i - 1; j >= 0; --j){
            printf("%c", s[j][k]);
        }
        printf("\n");
    }

    return 0;
}
