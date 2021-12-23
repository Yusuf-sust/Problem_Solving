#include <stdio.h>

int main()
{
    int ph, pm, ah, am, res;
    while(scanf("%d %d %d %d", &ph, &pm, &ah, &am) == 4){
        if(ph == 0 && pm == 0 && ah == 0 && am == 0)
            break;
        res = (ah - ph) * 60 + (am - pm);
        if(res < 0)
            res += 24 * 60;
        printf("%d\n", res);
    }

    return 0;
}
