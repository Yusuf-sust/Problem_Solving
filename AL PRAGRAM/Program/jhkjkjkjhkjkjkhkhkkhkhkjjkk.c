#include <stdio.h>

int main()
{
    int n;
    double sum;
    while(scanf("%d", &n) == 1){
        sum = (((n * (n + 1)) / 2));
        sum *= sum;
        printf("%.0lf\n", sum);
    }

    return 0;
}

