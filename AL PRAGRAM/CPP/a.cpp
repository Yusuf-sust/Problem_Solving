#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a[100], n, m;
    while(scanf("%d", &n) == 1){
        j = 0;
        memset(a, 0, sizeof(a));
        for(i = 0; i < n; i++){
            scanf("%d", &m);
            if(m % 2 == 0){
                a[j++] = m;
            }
        }
        int k = 2*j - 1;
    for(i = 1; i <= j; i++){
        a[k] = a[j-i];
        k -= 2;
    }
    for(i = 0; i < 2* j; i+= 2)
        a[i] = a[i+1];
    for(i = 0; i < 2*j-1; i++){
        printf("%d ", a[i]);
    }
    printf("%d\n", a[i]);
    }

    return 0;
}
