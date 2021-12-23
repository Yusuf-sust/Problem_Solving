#include <stdio.h>

int main()
{
    int i, n;
    for(n = 1; n <= 20; n++){
        for(i = 1; i <= 10; i++){
        printf("%d*%d = %d\n", n, i, n*i);
        }
    }

    return 0;

}

