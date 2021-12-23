#include <bits/stdc++.h>
using namespace std;

int min(int m, int n);

int main()
{
    char p, q;
    int t, m, n, sum, i;
    cin>>t;
    cin>>q;
    for(i = 0; i < t; ++i)
    {
        cin>>p>>m>>n;
        if(p == 'Q' || p == 'r')
        {
            sum = min(m, n);
            cout<<sum<<endl;
        }
        else if(p == 'k')
        {
            sum = (m * n + 1) / 2;
            cout<<sum<<endl;
        }
        else if(p == 'K')
        {
            sum = ((m + 1) / 2) * ((n + 1) / 2);
            cout<<sum<<endl;
        }
        cin>>q;
    }

    return 0;
}

int min(int m, int n)
{
    if(m < n)
        return m;
    else
        return n;
}
