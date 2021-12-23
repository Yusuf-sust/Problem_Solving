#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld", &n) == 1){
        if((n % 4) == 0 && (n % 100) != 0 || (n % 400) == 0){
            if((n % 15) == 0){
                printf("This is leap year.\n");
                printf("This is huluculu festival year.\n");
                printf("\n");
            }
            else if((n % 55) == 0){
                printf("This is leap year.\n");
                printf("This is bulukulu festival year.\n");
                printf("\n");
            }
            else{
                printf("This is leap year.\n");
                printf("\n");
            }
        }
        else if((n % 15) == 0){
            printf("This is huluculu festival year.\n");
            printf("\n");
        }
        else if((n % 55) == 0){
            printf("This is bulukulu festival year.\n");
            printf("\n");
        }
        else{
            printf("This is an ordinary year.\n");
            printf("\n");
        }
    }

    return 0;
}
