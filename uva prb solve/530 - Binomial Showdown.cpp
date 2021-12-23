#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j;
    unsigned long long sum;
    while(cin>>n>>k)
    {
        if(n == 0 && k == 0)
            break;
        if(k > (n/2))
            k = n - k;
        sum = 1;
        for(i = 0; i < k; ++i)
        {
            sum = (sum * (n - i)) / (i + 1);
        }
        cout<<sum<<endl;
    }

    return 0;
}
