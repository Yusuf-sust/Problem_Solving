#include <bits/stdc++.h>
using namespace std;

long long int dp[1000][1000];

long long f(int n, int r)
{
    if(r == 0)
        return 1;
    if(n == r)
        return 1;
    if(dp[n][r] != -1)
        return dp[n][r];
    else
    {
        dp[n][r] = f(n-1, r) + f(n-1, r-1);
        return dp[n][r];
    }
}

int main()
{
    int n, r;
    memset(dp, -1, sizeof(dp));
    while(scanf("%d %d", &n, &r) == 2)
    {
        if(n < 0)
            break;
        long long int x = f(n,r);
        cout<<x<<endl;
    }

    return 0;
}

