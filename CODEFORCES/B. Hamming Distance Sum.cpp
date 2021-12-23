#include <bits/stdc++.h>
using namespace std;
char s[2000005], s2[2000005];

int main()
{
    int l1, l2, i, j, sum = 0;
    gets(s);
    gets(s2);
    l1 = strlen(s);
    l2 = strlen(s2);
    for(i = 0; i <l1; ++i)
    {
        for(j = i; j <= (l2 - l1 + i); j++)
        {
            if(s[i] != s2[j])
                sum += 1;
        }
    }
    cout<<sum<<endl;

    return 0;

}
