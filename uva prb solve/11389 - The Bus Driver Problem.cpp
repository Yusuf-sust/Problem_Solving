#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, r, i, x, j, t;
    unsigned long long sum;
    vector<int> v1;
    vector<int> v2;
    while(cin>>n>>d>>r)
    {
        if(n ==0 && d ==0 && r == 0)
            break;
        sum = 0;
        for(i = 0; i < n; ++i)
        {
            cin>>x;
            v1.push_back(x);
        }
        for(i = 0; i < n; ++i)
        {
            cin>>x;
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        j = n - 1;
        for(i = 0; i < n; ++i)
        {
            t = v1[i] + v2[j];
            if(t > d)
            {
                t -= d;
                sum += t * r;
            }
            j--;
        }
        cout<<sum<<endl;
        v1.clear();
        v2.clear();
    }

    return 0;
}
