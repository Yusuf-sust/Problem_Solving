#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    switch(ch){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U': printf("vowel\n");
             break;
    default : printf("consonant\n");
    }

    return 0;
}

