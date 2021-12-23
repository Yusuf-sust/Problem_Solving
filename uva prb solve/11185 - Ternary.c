#include <stdio.h>
 int main()
 {
     int n, arr[1000], i, j;
     while(scanf("%d", &n) == 1){
            if(n < 0)
                break;
            if(n == 0){
            printf("0\n");
            continue;
            }
        for(i = 0; n > 0; ++i){
            arr[i] = n % 3;
            n /= 3;
        }

        for(j = i - 1; j >= 0; --j)
            printf("%d", arr[j]);
        printf("\n");
     }

     return 0;
 }

