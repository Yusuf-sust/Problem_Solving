#include <stdio.h>
#include <string.h>

char str[100];

char sort(const void * a, const * b)
{
    return (*(char*)a - *(char*)b);
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if (l == r)
        printf("%s\n", a);
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        }
    }
}

int arr[100];
void permute2(char *a, int p, int len )
{
    int i;
    if (p == len)
        printf("%s\n", a);
    else
    {
        for (i = 0; i < len; i++)
        {
            if(arr[i] == 0)
            {

            }
        }
    }
}

int main()
{
    int n, t, i;
    scanf("%d ", &t);
    for(i = 0; i < t; ++i)
    {
        gets(str);
        n = strlen(str);
        qsort(str, n, sizeof(char), sort);
        permute(str, 0, n-1);
    }

    return 0;
}
