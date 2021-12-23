#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;
map<char,char>k;
int main()
{
   int i;
    char key[]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
    'A','S','D','F','G','H','J','K','L',';','\'' , 'Z','X','C','V','B','N','M',',','.','/','\0'};
    for(i=1;key[i]!='\0';i++)
   {
      k[key[i]]=key[i-1];
   }
   key[' ']=' ';
    char s[10000];
    while(gets(s))
   {
      for(i=0;s[i]!='\0';i++)
         cout<<k[s[i]];
      cout<<endl;
   }
    return 0;
}

