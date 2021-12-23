#include <stdio.h>

int main()
{
    int cd, cm, cy, bd, bm, by, age, t, i;
    scanf("%d", &t);
    for(i = 1; i <= t; ++i)
    {
        scanf("%d/%d/%d", &cd, &cm, &cy);
        scanf("%d/%d/%d", &bd, &bm, &by);
        age = cy - by;
        if(cm < bm || (cm == bm && cd < bd))
            age -= 1;
        if(age < 0)
        {
            printf("Case #%d: Invalid birth date\n", i);
        }
        else if(age > 130)
        {
            printf("Case #%d: Check birth date\n", i);
        }
        else
            printf("Case #%d: %d\n", i, age);
    }

    return 0;
}
