#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s1[100];
char s2[100];

int counts1();
int counts2();

int main()
{
    int p, q;
    double r;
    while(gets(s1) && gets(s2))
    {
        p = counts1();
        q = counts2();
        if(p == 0 && q == 0)
        {
            printf("\n");
            continue;
        }
        else
        {
            if(p < q)
            {
                int temp = p;
                p = q;
                q = temp;
            }
            r = ((100.0 / (double)p) * (double)q);
            printf("%.2lf %%\n", r);
        }
    }

    return 0;
}

int counts1()
{
    int i, sum = 0;
    for(i = 0; s1[i] != '\0'; ++i)
    {
        if(isalpha(s1[i]))
        {
            if(s1[i] > 96)
            {
                sum += (int)s1[i] - 96;
            }
            else
            {
                sum += (int)s1[i] - 64;
            }
        }
    }
    if(sum > 0)
    {
        sum = sum % 9;
        if(sum == 0)
            sum = 9;
    }

    return sum;
}

int counts2()
{
    int i, sum = 0;
    for(i = 0; s2[i] != '\0'; ++i)
    {
        if(isalpha(s2[i]))
        {
            if(s2[i] > 96)
            {
                sum += (int)s2[i] - 96;
            }
            else
            {
                sum += (int)s2[i] - 64;
            }
        }
    }
    if(sum > 0)
    {
        sum = sum % 9;
        if(sum == 0)
            sum = 9;
    }

    return sum;
}
