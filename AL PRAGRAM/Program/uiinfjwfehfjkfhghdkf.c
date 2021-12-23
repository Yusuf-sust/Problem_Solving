#include <stdio.h>

int main()
{
    int x =10, y = 20, z = 30;
    printf(" Less Than (<) operator:\n");
    printf("\t x < y : %d\n", x < y);
    printf("\t y < x : %d\n\n", y < x);

    printf(" Less Than or Equal to (<=) operator:\n");
    printf("\t x <= y : %d\n", x <= y);
    printf("\t y <= x : %d\n\n", y <= x);

    printf(" Greater Than (>) operator:\n");
    printf("\t x > y : %d\n", x > y);
    printf("\t y > x : %d\n\n", y > x);

    printf(" Greater Than Or Equal to (>=) operator:\n");
    printf("\t x >= y : %d\n", x >= y);
    printf("\t y >= x : %d\n\n", y >= x);

    printf(" Equal to (==) operator:\n");
    printf("\t x == y : %d\n", x == y);
    printf("\t y == z : %d\n\n", y == z);

    printf(" Not Equal to (!=) operator:\n");
    printf("\t x != y : %d\n", x != y);
    printf("\t y != z : %d\n\n", y != x);

    return 0;

}
