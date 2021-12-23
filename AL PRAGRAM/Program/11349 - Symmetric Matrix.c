#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n, t, TC = 1, flag;
    long long int arr[100000];
    char s[10];
    scanf("%d ", & t);
    for(i = 0; i < t; ++i){
        gets(s);
        n = s[4] - '0';
        n = n * n;
        flag = 0;
        for(j = 0; j < n; ++j){
            scanf("%lld", &arr[j]);
        }
        for(j = 0; j < (n / 2); ++j){
            if(arr[j] == arr[n-1]){
                flag = 1;
            }
            else{
                printf("Test #%d: Non-symmetric.\n", TC++);
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("Test #%d: Symmetric.\n");
        }
    }

    return 0;
}
