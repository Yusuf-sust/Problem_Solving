#include <stdio.h>

int main()
{
    int p, q, r, s;
    float ratio;
    printf("Enter four integers (separated by space):\n");
    scanf("%d %d %d %d", &p, &q, &r,&s);

    if( (r-s) == 0){
        printf("\n Ratio is infinity, because ( r-s) is 0.");
        exit(0);
    }
    ratio = (float)(p+q) / (float)( r-s);
    printf("\n Ratio is %.2f", ratio);

    return 0;
}
