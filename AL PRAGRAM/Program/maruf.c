#include<stdio.h>
int main()
{
    int N,i,j,arr[10000], ar[10000],count;
    while(scanf("%d", &N) == 1)
    {
        if(N == 0)
            break;
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        count=0;
        j = 0;
        for(i=0;i<N;i++)
        {
            if(arr[i]==0){
                    count++;
            }
            else{
                ar[j] = arr[i];
                j++;
            }
        }
        if(count == N)
            printf("0\n");
        else{
        for(i = 0; i < j - 1; ++i)
            printf("%d ", ar[i]);
        printf("%d\n", ar[i]);
        }
    }

    return 0;
}
