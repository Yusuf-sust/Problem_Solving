#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    switch(ch){
    case 'a':
    case 'A': printf("vowel");
             break;
    case 'e':
    case 'E': printf("vowel");
             break;
    case 'i':
    case 'I': printf("vowel");
             break;
    case 'o':
    case 'O': printf("vowel");
             break;
    case 'u':
    case 'U': printf("vowel");
             break;
    default : printf("consonant");
    }

    return 0;
}
