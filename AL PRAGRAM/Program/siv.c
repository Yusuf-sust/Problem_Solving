#include <stdio.h>

char pr[10000100];

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
    int n = 1000000, i, cnt = 0;
    //scanf("%d", &n);
    prime(n);

    for(i = 0; i <= n; i++){
        if(pr[i] == 0){
            cnt++;
            //printf("%d ", i);
        }
    }
    printf("\n%d\n", cnt);

    return 0;
}
