#include <stdio.h>

int main()
{
    int months, days;
    printf(" Pl enter days:");
    scanf("%d", &days);
    months = days / 30;
    days = days % 30;
    printf(" Months = %d\n", months);
    printf(" Days = %d\n", days);

    return 0;
}
