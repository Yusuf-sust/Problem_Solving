#include <stdio.h>
#include <string.h>

char s1[1010], s2[1010];
int a[1010][1010];

int main()
{
    int i, j, max, l1, l2;
    while(gets(s1))
    {
        memset(a, 0, sizeof(a));
        gets(s2);
        max = 0;
        l1 = strlen(s1);
        l2 = strlen(s2);
        for(i = 1; i <= l1; i++)
        {
            for(j = 1; j<= l2; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    a[i][j] = a[i-1][j-1] + 1;
                }
                else if(a[i-1][j] >= a[i][j-1])
                {
                    a[i][j] = a[i-1][j];
                }
                else
                {
                    a[i][j] = a[i][j-1];
                }
                if(a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
