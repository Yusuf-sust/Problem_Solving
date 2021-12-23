#include <stdio.h>
int fibo(int a);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));

    return 0;
}

int fibo(int a)
{
    if(a == 0)
        return 0;
    if(a == 1)
        return 1;
    else
        return fibo(a-1) + fibo(a - 2);
}
