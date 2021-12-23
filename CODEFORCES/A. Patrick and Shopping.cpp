#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, w, x, y, z;
    cin>>a>>b>>c;
    w = 2 * (a + b);
    x = a + b + c;
    y = 2 * (a + c);
    z = 2 * (b + c);
    if(w <= x && w <= y && w <= z)
        cout<<w<<endl;
    else if(x <= w && x <= y && x <= z)
        cout<<x<<endl;
    else if(y <= x && y <= w && y <= z)
        cout<<y<<endl;
    else
        cout<<z<<endl;

    return 0;
}
