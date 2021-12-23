#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000], t[100000];
    int i, j, s1, t1, count;
    while(scanf("%s %s", s, t) == 2)
    {
        count = 0;
        j = 0;
        s1 = strlen(s), t1 = strlen(t);
        for(i = 0; i < s1; ++i)
        {
            for(; j < t1; ++j)
            {
                if(s[i] == t[j])
                {
                    j = j + 1;
                    count++;
                    break;
                }
            }
            if(j >= t1 || count == s1)
            {
                break;
            }
        }
        if(count == s1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
