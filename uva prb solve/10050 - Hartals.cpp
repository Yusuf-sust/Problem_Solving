#include <iostream>
#include <set>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int i, j, n, m, t, x, y, z;
    cin>>t;
    for(i = 0; i < t; ++i)
    {
        cin>> n;
        cin>>m;
        for(j = 0; j < m; ++j)
        {
            cin>>x;
            y = 2;
            z = x;
            while(x <= n)
            {
                if(x % 7 != 6 && x % 7 != 0)
                {
                    s.insert(x);
                }
                x = z * y;
                y++;
            }
        }
        cout<<s.size()<<endl;
        s.clear();
    }

    return 0;
}
