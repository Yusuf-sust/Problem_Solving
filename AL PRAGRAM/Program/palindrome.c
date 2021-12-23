#include <stdio.h>

int main()
{
    int n, rev = 0, temp, rem;
    scanf("%d", &n);
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(rev == n)
        printf("%d is palindrome\n", n);
    else{
        printf("%d is not palindrome\n", n);
    }

    return 0;
}
