#include <stdio.h>

int main()
{
    int n, i;
    double a, b, c, d;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        if(a == b && b == c && c == d)
            printf("square\n");
        else if(a == c && b == d)
            printf("rectangle\n");
        else if(a == b && c == d)
            printf("rectangle\n");
        else if(a == d && b == c)
            printf("rectangle\n");
        else if((a + b + c) > d && (b + c +d) > a && (a + c + d) > b && (a + b + d) > c)
            printf("quadrangle\n");
        else
            printf("banana\n");
    }

    return 0;
}
