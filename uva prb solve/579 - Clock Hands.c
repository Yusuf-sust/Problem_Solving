#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int h, m;
    double x;
    while(scanf("%d:%d", &h, &m) == 2){
        if(h == 0 && m == 0)
            break;
        else{
            x = fabs((5.5 * m) - (30 * h));
            if(x > 180 && x <= 360){
                x = 360 - x;
                printf("%.3lf\n", x);
            }
            else{
                printf("%.3lf\n", x);
            }
        }
    }

    return 0;
}
