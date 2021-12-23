#include <stdio.h>

int main()
{
    int r, c, k, e, d, res;
    while(scanf("%d %d", &r, &c) == 2 && r !=0 && c != 0)
    {
        if(r == 1 || c == 1)
            res = r * c;
        else if(r == 2 || c == 2)
        {
            if(r == 2)
                k = c;
            else
                k = r;
            e = (k % 4 == 0)?(k / 4) : (k / 4) + 1;
            d = ((k - 1) % 4 == 0)? (k- 1) / 4 :(k - 1) / 4 + 1;
            res = 2 * (e + d);
        }
        else
            res = ((r * c) % 2 == 0)? (r * c) / 2: (r * c) / 2 + 1;
        printf("%d knights may be placed on a %d row %d column board.\n", res, r, c);
    }

    return 0;
}
