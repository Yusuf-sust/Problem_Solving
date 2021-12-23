#include <stdio.h>

int main()
{
    int count_lower = 1, count_other = 1;
    char ch;
    printf("Please enter a character\n");
    scanf("%c", &ch);

    if( ch >= 'a' && ch <= 'z'){
        ++count_lower;
        printf("%c is a lower case.", ch);
    }
    else{
        ++count_other;
        printf("%c is not lower case.", ch);
    }

    return 0;
}
