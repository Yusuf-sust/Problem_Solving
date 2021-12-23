#include <bits/stdc++.h>
using namespace std;

int a[110];
int maximum(int n)
{
    int curmax = -1, max = -10000000, i;
    for(i = 0; i < n; i++)
    {
        if(curmax < 0)
        {
            curmax = a[i];
        }
        else
            curmax += a[i];
        if(curmax > max)
            max = curmax;
    }

    return max;
}

int main()
{
    int i, result, max = -100000, j, k, n, s[110][110];
    cin>>n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin>>s[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        memset(a, 0, sizeof(a));
        for(j = i; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                a[k] += s[k][j];
            }
            result = maximum(n);
            if(result>max)
                max = result;
        }
    }
    cout<<max<<endl;

    return 0;
}

