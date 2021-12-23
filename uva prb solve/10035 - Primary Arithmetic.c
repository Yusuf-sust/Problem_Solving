#include <stdio.h>

int main()
{
    unsigned int a, b, arr1[100], arr2[100];
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            break;
        int i = 0, j, carry = 0, res = 0;
        while(a > 0 || b > 0)
        {
            arr1[i] = a % 10;
            arr2[i] = b % 10;
            a /= 10;
            b /= 10;
            i++;
        }
        for(j = 0 ; j < i ; ++j)
        {
            if((arr1[j] + arr2[j] + res) > 9)
            {
                res = 1;
                carry++;
            }
            else
            {
                res = 0;
                carry += 0;
            }
        }
        if(carry == 0)
        {
            printf("No carry operation.\n");
        }
        else if(carry == 1)
        {
            printf("%d carry operation.\n", carry);
        }
        else
        {
            printf("%d carry operations.\n", carry);
        }
    }

    return 0;
}
