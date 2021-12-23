#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, x, f, s, t;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d", &x);
        f = x * 567;
        f /= 9;
        f += 7492;
        f *= 235;
        f /= 47;
        f -= 498;
        s = f / 10;
        t = s % 10;
        if(t < 0){
            t = t * (-1);
        }
        printf("%d\n", t);
    }

    return 0;
}
