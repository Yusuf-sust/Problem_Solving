#include <stdio.h>
#include <ctype.h>

int main()
{
   int i, vowel, consonant, digit, word, other;
   char string[80], c;

   i = vowel = consonant = digit = word = other = 0;

   printf("Program to count vowels, consonants, digits, words \n ");
   printf("and other character in the string . . . \n\n");

   printf(" Type a string :");
   scanf("%[^\n", string);

   while ( ( c = tolower ( string[i++] ) ) != '\0'){
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        ++ vowel;
    else
        if( (c > 'a' && c < 'e') || ( c > 'e' && c < 'i') || ( c > 'i' && c < 'o') || ( c > 'o' && c < 'u'))
        ++ consonant;
     else
        if( c >= '0' && c <= '9')
            ++digit;
      else
        if( c == ' ')
            ++ word;
        else{
            ++ other;
        }
   }
   ++word;
   printf("# of vowels              : %d\n", vowel);
   printf("# of consonants          : %d\n", consonant);
   printf("# of digits              : %d\n", digit);
   printf("# of words               : %d\n", word);
   printf("# of others characters   : %d\n", other);

   return 0;


}
