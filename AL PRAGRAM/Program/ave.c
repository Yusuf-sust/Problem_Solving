#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0, ave, x;
    scanf("%d", &n);
    while( i<n){
        scanf("%d", &x);
        sum = sum + x;
        i++;
    }
    ave = sum / n;
    printf("%d\n", ave);

    return 0;
}
