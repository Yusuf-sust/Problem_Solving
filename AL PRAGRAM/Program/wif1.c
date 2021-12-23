#include <stdio.h>

int main()
{
    int n = 1;
    while(n <= 2000){
        printf("%d\n", n);
        n++;
        if(n > 1500){
            break;
        }
    }

    return 0;
}
