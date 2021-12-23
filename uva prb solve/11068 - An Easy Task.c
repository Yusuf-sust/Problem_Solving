#include <stdio.h>

int main()
{
    int a1, b1, c1, a2, b2, c2, m, n, o;
    float x, y;
    while(scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2) == 6)
    {
        if(a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0 && c1 == 0 && c2 == 0)
            break;
        if(a1 == 0 && b1 == 0)
        {
            printf("The fixed point is at -inf inf.\n");
            continue;
        }
        if(a2 == 0 && b2 == 0)
        {
            printf("The fixed point is at inf -inf.\n");
            continue;
        }
        o = a2 * b1 - a1 * b2;
        m = b1 * c2 - b2 * c1;
        n = a2 * c1 - a1 * c2;
        if(o == 0)
        {
            printf("No fixed point exists.\n");
            continue;
        }

        else
        {
            x = (float)m / (float)o;
            y = (float)n / (float)o;
            printf("The fixed point is at %.2f %.2f.\n", x, y);
        }
    }

    return 0;
}
