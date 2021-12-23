#include <bits/stdc++.h>
using namespace std;

long long int fun(int n);

int main()
{
    long long sum, m, n, i;
    while(cin>>m>>n)
    {
        if(m < 0 && n < 0)
            break;
        sum = 0;
        for(i = m; i <= n; ++i)
        {
            sum += fun(i);
        }
        cout<<sum<<endl;
    }

    return 0;
}

long long int fun(int n)
{
    if(n == 0)
        return 0;
    else if( n % 10 > 0)
        return n % 10;
    else
        return n / 10;
}
