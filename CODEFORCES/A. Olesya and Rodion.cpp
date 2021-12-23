#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m;
    cin>>n>>m;
    if(n == 1 && m == 10)
        cout<<"-1"<<endl;
    else if(m == 10)
    {
        for(i = 0; i < (n-1); i++)
        {
            cout<<1;
        }
        cout<<0<<endl;
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            cout<<m;
        }
        cout<<endl;
    }

    return 0;
}
