#include <stdio.h>

int main()
{
    int year;
    printf("\n\a please enter a year :");
    scanf("%d", &year);

    if((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0 ){
        printf("\n\a %d is a LEAP YEAR.", year);
    }
    else{
            printf("\n\a %d is not a LEAP YEAR.", year);
    }

    return 0;
}
