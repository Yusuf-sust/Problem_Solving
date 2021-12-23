#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, M, A, R, G, I, T, sum, t;
    char s[1000];
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        A = 0;
        G = 0;
        I = 0;
        M = 0;
        R = 0;
        T = 0;
        sum = 0;
        gets(s);
        for(j = 0; j < strlen(s); ++j)
        {
            if(s[j] == 'A')
                A++;
            else if(s[j] == 'G')
                G++;
            else if(s[j] == 'I')
                I++;
            else if(s[j] == 'M')
                M++;
            else if(s[j] == 'R')
                R++;
            else if(s[j] == 'T')
                T++;
            if(A >= 3 && G >= 1 && I >= 1 && M >= 1 && R >= 2 && T >= 1)
            {
                sum++;
                A -= 3;
                G -= 1;
                I -= 1;
                M -= 1;
                R -= 2;
                T -= 1;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
