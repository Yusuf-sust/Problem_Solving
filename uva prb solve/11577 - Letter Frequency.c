#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k, count, ar[100], x, y;
    char s[1000], s1[100], c, d;
    scanf("%d ", &n);
    for(y = 0; y < n; ++y)
    {
        x = 0;
        gets(s);
        c = 'A', d = 'a';
        for(i = 0; i < 26; ++i)
        {
            count = 0;
            for(k = 0; s[k] !='\0'; ++k)
            {
                if(s[k] == c || s[k] == d)
                {
                    count++;
                }
            }
            if(count > 0)
            {
                s1[x] = d;
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
        j = ar[0];
        for(i = 0; i < x; ++i)
        {
            if(ar[i] == j)
            {
                printf("%c", s1[i]);
            }
            else
                break;
        }
        printf("\n");
    }

    return 0;
}

