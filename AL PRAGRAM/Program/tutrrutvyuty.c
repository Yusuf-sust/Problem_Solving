#include<stdio.h>

int main()
{
    int i, n;
    float sum, ave, x;
    while(scanf("%d\n", &n) == 1){
        sum = 0;
        for(i = 0; i < n; i++){
            sum = sum + x;
        }
        ave = sum / n;
        printf("%f", ave);
    }

    return 0;
}
