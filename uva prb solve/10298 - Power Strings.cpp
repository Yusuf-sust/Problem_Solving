#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a[1000];
    char s[1000010];
    while(gets(s))
    {
        memset(a, 0, sizeof(a));
        if(strcmp(s,".") == 0)
            break;
        for(i = 0; s[i] != '\0'; i++){
            j = (int)s[i];
            a[j]++;
        }
        sort(a, a+501);
        printf("%d\n", a[500]);
    }

    return 0;
}
