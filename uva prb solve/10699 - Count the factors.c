#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int i, flag = 1;
    for(i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int i, j, count, n;
    while(scanf("%d", &n) == 1 && n != 0){
        count = 0;
        if(n % 2 == 0)
            count++;
        for(i = 3; i <= n; i += 2){
            if(n % i == 0){
                if(prime(i))
                    count++;
            }
        }
        printf("%d : %d\n", n, count);
    }

    return 0;
}
