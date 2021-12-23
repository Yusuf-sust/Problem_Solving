#include <bits/stdc++.h>
using namespace std;

void rec(int n)
{
    printf("%d ", n);
    if(n < 1)
        return;
    else
        rec(n-1);
    printf("%d ", n);
}

int main()
{
    int n, m;
    cin>>n;
    rec(n);

    return 0;
}
