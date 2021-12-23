#include <stdio.h>
#include <math.h>

char pr[20000100];

int a[100010];

void prime(int n)
{
    int x = sqrt(n), i, j;
    pr[0] = pr[1] = 1;
    for(i = 4; i <= n; i+= 2){
        pr[i] = 1;
    }
    for(i = 3; i <= x; i+= 2){
        if(pr[i] == 0){
            for(j = i*i; j<= n; j += i){
                pr[j] = 1;
            }
        }
    }
}

int main()
{
    int i, j = 1, k, n, m = 20000010;
    prime(m);
    for(i = 0; i <= 20000010; i++){
        if(pr[i] == 0 && pr[i+2] == 0){
            a[j++] = i;
            if(j > 100005)
                break;
        }
    }
    while(scanf("%d", &n) == 1){
        printf("(%d, %d)\n", a[n], a[n]+2);
    }

    return 0;
}
