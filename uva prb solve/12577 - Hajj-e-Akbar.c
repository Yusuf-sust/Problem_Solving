#include <stdio.h>

int main()
{
    int TC = 1, i;
    char chs[100];
    while(scanf("%s", chs) == 1)
    {
    if(chs[0] == 'H')
        printf("Case %d: Hajj-e-Akbar\n", TC++);
     else if(chs[0] == 'U')
        printf("Case %d: Hajj-e-Asghar\n", TC++);
        else
            break;
    }

    return 0;
}
