#include <stdio.h>
#include <math.h>

char pr[1001000];
int a[1001000];


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
    int i, k = 0, n, m = 1000100, sum, b, c;
    prime(m);
    for(i = 0; i <= 1000100; i++){
        if(pr[i] == 0){
            int sum = 0;
            int x = i;
            while(x > 0){
                sum += x % 10;
                x /= 10;
            }
            if(pr[sum] == 0){
                a[i] = ++k;
            }
            else a[i] = k;
        }
        else a[i] = k;
    }
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &c, &b);
        if(b < c){
            c = c^b;
            b = c^b;
            c = c^b;
        }
        printf("%d\n", (a[b] - a[c-1]));
    }

    return 0;
}

