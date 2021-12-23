#include <stdio.h>

int main()
{
    int i, n;
    long long int fact = 1;
    scanf("%d", &n);
    for(i = n; i >= 1; --i){
        fact = fact * i;
    }
    printf("%lld\n", fact);

    return 0;
}
