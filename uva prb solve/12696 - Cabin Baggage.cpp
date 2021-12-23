#include <bits/stdc++.h>
using namespace std;

int main()
{
    double l, w, d, v, sum;
    int t, i, count = 0;
    cin>>t;
    for(i = 0; i < t; ++i)
    {
        cin>>l>>w>>d>>v;
        sum = l + w + d;
        if(((l <= 56.0 && w <= 45.0 && d <= 25.0) || sum <= 125.0) && v <= 7.0)
        {
            cout<<1<<endl;
            count++;
        }
        else
            cout<<0<<endl;
    }
    cout<<count<<endl;

    return 0;
}
