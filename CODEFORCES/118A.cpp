#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf



int main()
{
   char s[1000], ch, z;
   gets(s);
   for(int i = 0; s[i] != '\0'; i++)
   {
       ch = tolower(s[i]);
       if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
        pf(".%c", ch);
   }
   pf("\n");
    return 0;
}


