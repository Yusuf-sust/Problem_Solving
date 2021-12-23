#include <bits/stdc++.h>
using namespace std;

int a[100], n;
int maximum()
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
    int i, result;
    while(cin>>n)
    {
        memset(a, 0, sizeof(a));
        for(i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        result = maximum();
        cout<<result<<endl;
    }

    return 0;
}
