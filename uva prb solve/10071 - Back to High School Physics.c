#include <stdio.h>

int main()
{
    long long int a, b, mul;
    while(scanf("%lld %lld", &a, &b) == 2){
      mul = 2 * a * b;
      printf("%lld\n", mul);
    }

    return 0;
}
