#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Please enter three number ( separated by space):");
    scanf(" %f %f %f", &a, &b, &c);

    if( a > b && a > c){
        printf(" The biggest number is a = %.2lf\n", a);
    }
    else if( b > c){
        printf(" The biggest number is b = %.2lf\n", b);
    }
    else{
        printf(" The biggest number is c =N %.2lf\n", c);
    }

    return 0;
}
