#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000];
    int i, j, sum, l, x, a1[200], a2[200], flag = 0;
    while(gets(s))
    {
        if(flag)
            printf("\n");
        flag = 1;
        x = 0;
        l = strlen(s);
        for(i = 128; i >= 32; --i)
        {
            sum = 0;
            for(j = 0; j < l; ++j)
            {
                if(i == (int)s[j])
                    sum++;
            }
            if(sum)
            {
                a1[x] = sum;
                a2[x] = i;
                x++;
            }
        }
        int cnt;
        for(i = 0; i < x; ++i)
        {
            cnt = i;
            for(j = i; j < x; ++j)
            {
                if(a1[j] < a1[cnt]) cnt = j;
                else if(a1[j] == a1[cnt])
                {
                    if(a2[cnt] < a2[j])
                        cnt = j;
                }
            }
            int t = a1[i];
            a1[i] = a1[cnt];
            a1[cnt] = t;

            int f = a2[i];
            a2[i] = a2[cnt];
            a2[cnt] = f;
        }
        for(i = 0; i < x; ++i)
        {
            printf("%d %d\n", a2[i], a1[i]);
        }
    }

    return 0;
}
