#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0, n, len;
    double sum = 0;
    char s[100], s1[20], ch;
    scanf("%d ", &n);
    gets(s);
    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        if(s[i] == ',' || s[i+1] == '\0')
        {
            if(s[i+1] == '\0')
            {
                if(s[i] == '+' && s[i-1] == 'A')
                    sum += 5.0;
                else if(s[i] == '-' && s[i-1] == 'A')
                    sum += 3.5;
                else if(s[i] == 'A')
                    sum += 4.0;
                else if(s[i] == 'B')
                    sum += 3.0;
                else if(s[i] == 'C')
                    sum += 2.0;
                else if(s[i] == 'D')
                    sum += 1.0;
                else if(s[i] == 'F')
                    sum += 0.0;
                s1[j++] = s[i];
                s1[j] = '\0';
                printf("%s\n", s1);
                j = 0;
            }
            else
            {
                if(s[i-1] == '+' && s[i-2] == 'A')
                    sum += 5.0;
                else if(s[i-1] == '-' && s[i-2] == 'A')
                    sum += 3.5;
                else if(s[i-1] == 'A')
                    sum += 4.0;
                else if(s[i-1] == 'B')
                    sum += 3.0;
                else if(s[i-1] == 'C')
                    sum += 2.0;
                else if(s[i-1] == 'D')
                    sum += 1.0;
                else if(s[i-1] == 'F')
                    sum += 0.0;
                s1[j] = '\0';
                printf("%s\n", s1);
                j = 0;
            }
        }
        else s1[j++] = s[i];
    }
    sum /= (double)n;
    printf("Average GPA : %.2lf\n", sum);

    return 0;
}
