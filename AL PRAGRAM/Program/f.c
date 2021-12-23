#include <stdio.h>
int fact(int a);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));

    return 0;
}

int fact(int a)
{
    if(a <= 0)
        return 1;
    else
        return a * fact(a - 1);
}
