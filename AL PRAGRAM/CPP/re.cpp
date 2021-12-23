#include <bits/stdc++.h>
using namespace std;

void rec(int n)
{
    if(n <= 0)
        return;
    else
    {
        printf("mul %d\n", n);
        rec(n-2);
        rec(n-3);
        printf(" next %d\n", n);
    }
}

int main()
{
    int n;
    cin>>n;
    rec(n);

    return 0;
}
