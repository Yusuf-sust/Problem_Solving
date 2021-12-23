#include <bits/stdc++.h>
using namespace std;

int a[200009];

int main()
{
    int i, j, k, n, m = 0;
    long long int sum;
    cin>>n;
    memset(a, 0, sizeof(a));
    for(i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    sum = (n * n) + n;
    sum /= 2;
    m += a[0];
    for(i = 1; i < n; i++){
        m += (a[i] - a[i-1]);
    }
    sum -= m;
    cout<<sum<<endl;

    return 0;
}
