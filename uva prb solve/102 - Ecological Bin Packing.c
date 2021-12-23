#include <stdio.h>
#include <string.h>

int main()
{
    int a[10], ar[10], i, sum;
    long long int min;
    char s[5];
    while(scanf("%d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]) == 9)
    {
        min = 1000000000000;
        ar[0] = a[3] + a[6];
        ar[1] = a[4] + a[7];
        ar[2] = a[5] + a[8];
        ar[3] = a[0] + a[6];
        ar[4] = a[1] + a[7];
        ar[5] = a[2] + a[8];
        ar[6] = a[0] + a[3];
        ar[7] = a[1] + a[4];
        ar[8] = a[2] + a[5];
        sum = ar[0]+ ar[4] + ar[8];
        if(sum < min)
        {
            min = sum;
            s[0] = 'B', s[1] = 'G', s[2] = 'C', s[3] = '\0';
        }
        sum = ar[0] + ar[5] + ar[7];
        if(sum < min)
        {
            min = sum;
            s[0] = 'B', s[1] = 'C', s[2] = 'G', s[3] = '\0';
        }
        else if(sum == min)
        {
            if(strcmp(s , "BCG") > 0)
                s[0] = 'B', s[1] = 'C', s[2] = 'G', s[3] = '\0';
        }
        sum = ar[1] + ar[3] + ar[8];
        if(sum < min)
        {
            min = sum;
            s[0] = 'G', s[1] = 'B', s[2] = 'C', s[3] = '\0';
        }
        else if(sum == min)
        {
            if(strcmp(s , "GBC") > 0)
                s[0] = 'G', s[1] = 'B', s[2] = 'C', s[3] = '\0';
        }
        sum = ar[1] + ar[5] + ar[6];
        if(sum < min)
        {
            min = sum;
            s[0] = 'G', s[1] = 'C', s[2] = 'B', s[3] = '\0';
        }
        else if(sum == min)
        {
            if(strcmp(s , "GCB") > 0)
                s[0] = 'G', s[1] = 'C', s[2] = 'B', s[3] = '\0';
        }
        sum = ar[2] + ar[3] + ar[7];
        if(sum < min)
        {
            min = sum;
            s[0] = 'C', s[1] = 'B', s[2] = 'G', s[3] = '\0';
        }
        else if(sum == min)
        {
            if(strcmp(s , "CBG") > 0)
                s[0] = 'C', s[1] = 'B', s[2] = 'G', s[3] = '\0';
        }
        sum = ar[2] + ar[4] + ar[6];
        if(sum < min)
        {
            min = sum;
            s[0] = 'C', s[1] = 'G', s[2] = 'B', s[3] = '\0';
        }
        else if(sum == min)
        {
            if(strcmp(s , "CGB") > 0)
                s[0] = 'C', s[1] = 'G', s[2] = 'B', s[3] = '\0';
        }

        printf("%s %lld\n", s, min);
    }

    return 0;

}

