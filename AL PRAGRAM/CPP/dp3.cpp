#include <bits/stdc++.h>
using namespace std;

long long int dp[200];

long long f(int n)
{
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    if(dp[n] != -1)
        return dp[n];
    else
    {
        dp[n] = n * f(n-1);
        return dp[n];
    }
}

int main()
{
    int n;
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &n) == 1)
    {
        if(n < 0)
            break;
        long long int x = f(n);
        cout<<x<<endl;
    }

    return 0;
}

