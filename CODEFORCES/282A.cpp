#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf


int main()
{
   int t, sum = 0;
   string s;
   sf("%d", &t);
   while(t--)
   {
       cin>>s;
       if(s == "++X" || s=="X++")
        sum++;
       else sum--;
   }
   pf("%d\n", sum);
}




