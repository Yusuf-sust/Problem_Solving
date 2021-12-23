#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

   char ch;
   scanf("%c", &ch);
   int a = ch;
   if(a > 96)
    a = a - 96;
   else if(a > 64)
    a = a - 38;
   printf("%d", a);

    return 0;
}
