#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    float Vowels = 0, Consonants = 0, Digits = 0, sum;
    char ch[1000];
    gets(ch);
    int i;
    for(i = 0; i < strlen(ch); ++i){
            if(isalpha(ch[i])){
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
            Vowels++;
        else
            Consonants++;
    } else
        Digits++;
    }
    sum = Vowels + Consonants + Digits;
    Vowels = (Vowels * 100) / sum;
    printf("Vowels=%.2f%%\n", Vowels);
    Consonants = (Consonants * 100) / sum;
    printf("Consonants=%.2f%%\n", Consonants);
    Digits = (Digits * 100) / sum;
    printf("Digits=%.2f%%\n", Digits);

    return 0;
}
