#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char s[1000];
    int i, j, n, k;
    double sum, m, x;
    scanf("%d ", &n);
    for(j = 0; j < n; ++j)
    {
        sum = 0;
        scanf("%s", s);
        for(i = 0; s[i] != '\0'; ++i)
        {
            if(isalpha(s[i]))
            {
                if(s[i] == 'C')
                    m = 12.01;
                else if(s[i] == 'H')
                    m = 1.008;
                else if(s[i] == 'O')
                    m = 16.00;
                else if(s[i] == 'N')
                    m = 14.01;
                if(!isalpha(s[i+1]) && s[i+1] != '\0')
                {
                    k = i + 1;
                    x = 0;
                    while(s[k] != '\0')
                    {
                        if(isalpha(s[k]))
                            break;
                        else
                        {
                            x = x * 10 + (s[k] - '0');
                            k++;
                        }
                    }
                    sum += m * x;
                }
                else
                    sum += m;
            }
        }
        printf("%.3lf\n", sum);
    }

    return 0;
}
