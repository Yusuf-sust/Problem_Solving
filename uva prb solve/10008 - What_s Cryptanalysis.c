#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, count, ar[100], x = 0, y;
    scanf("%d ", &n);
    char s[n][10000], s1[100], c, d;
    for(i = 0; i < n; ++i)
    {
        gets(s[i]);
    }
    c = 'A', d = 'a';
    for(i = 0; i < 26; ++i)
    {
        count = 0;
        for(j = 0 ; j < n; ++j)
        {
            for(k = 0; s[j][k] !='\0'; ++k)
            {
                if(s[j][k] == c || s[j][k] == d)
                {
                    count++;
                }
            }
        }
        if(count > 0)
        {
            s1[x] = c;
            ar[x] = count;
            x++;
        }
        c++;
        d++;
    }
    int cnt;
    for(i = 0; i < x; ++i)
    {
        cnt = i;
        for(j = i; j < x; ++j)
        {
            if(ar[j] > ar[cnt]) cnt = j;
            else if(ar[j] == ar[cnt])
            {
                if(s1[cnt] > s1[j])
                    cnt = j;
            }
        }
        int t = ar[i];
        ar[i] = ar[cnt];
        ar[cnt] = t;

        char f = s1[i];
        s1[i] = s1[cnt];
        s1[cnt] = f;
    }
    for(i = 0; i < x; ++i)
    {
        printf("%c %d\n", s1[i], ar[i]);
    }


    return 0;
}
