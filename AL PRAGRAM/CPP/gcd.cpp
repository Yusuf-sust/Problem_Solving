#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, r;
    while(scanf("%d %d", &m, &n) == 2){
        r = __gcd(m,n);
        cout<<r<<endl;
    }

    return 0;
}
