#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, l, t = 1;
    char s[100], s1[200];
    while(scanf("%s", s) == 1)
    {
        l = strlen(s);
        j = 0;
        int p = 1;
        for(k = 0; k < l; ++k)
        {
            if(s[k] != '0')
            {
                p = 0;
                break;
            }
        }
        if(p == 1)
        {
            printf("%4d. 0\n", t++);
            continue;
        }
        else
        {
            for(i = l - 1; i >= 0;)
            {
                if(s[i] != '0' || s[i-1] != '0')
                {
                    s1[j++] = s[i--];
                }
                else
                    i--;
                if(i >= 0)
                {
                    if(s[i] != '0')
                        s1[j++] = s[i--];
                    else
                        i--;
                }
                if(i >= 0)
                {
                    if(s[i] != '0')
                    {
                        if(s[i + 1] != '0' || s[i + 2] != '0')
                            s1[j++] = ' ';
                        s1[j++]= 'a', s1[j++]= 't', s1[j++]= 'a', s1[j++] = 'h', s1[j++]= 's', s1[j++]= ' ';
                        s1[j++] = s[i--];
                    }
                    else
                        i--;
                }
                if(i >= 0)
                {
                    if(s[i] != '0' || s[i-1] != '0')
                    {
                        s1[j++]= ' ',s1[j++]= 'r', s1[j++]= 'a', s1[j++]= 'j', s1[j++] = 'a', s1[j++]= 'h', s1[j++]= ' ';
                        s1[j++] = s[i--];
                    }
                    else
                        i--;
                }
                if(i >= 0)
                {
                    if(s[i] != '0')
                        s1[j++] = s[i--];
                    else
                        i--;
                }
                if(i >= 0)
                {
                    if(s[i] != '0' || s[i-1] != '0')
                    {
                        s1[j++]= ' ',s1[j++]= 'h', s1[j++]= 'k', s1[j++]= 'a', s1[j++] = 'l', s1[j++]= ' ';
                        s1[j++] = s[i--];
                    }
                    else
                        i--;
                }
                if(i >= 0)
                {
                    if(s[i] != '0')
                        s1[j++] = s[i--];
                    else
                        i--;
                }

                if(i >= 0)
                {
                    s1[j++]= ' ',s1[j++]= 'i', s1[j++]= 't', s1[j++]= 'u', s1[j++] = 'k', s1[j++] = ' ';
                }
            }
        }

        printf("%4d. ", t++);
        for(k = j - 1; k > 0; --k)
        {
            if(s1[k-1] == ' ' && s1[k] == ' ')
                continue;
            else
                printf("%c", s1[k]);
        }
        if(s1[k] == ' ')
            printf("\n");
        else
            printf("%c\n", s1[k]);
    }

    return 0;

}
