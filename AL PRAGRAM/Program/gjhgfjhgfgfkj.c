#include <stdio.h>

int main()
{
    float a, b, c;
    printf("\n\n\a Please enter three value (separated by space):");
    scanf(" %f %f %f", &a, &b, &c);
    printf(" The largest value is :");
    if( a > b){
        if( a > c){
            printf("\a %.2f", a);
           } else{
                printf("\a %.2f", c);
            }
    }
    else if( b > c){
        printf("\a %.2f", b);
    }
    else{
        printf("\a %.2f", c);
    }

    return 0;
}
