#include <bits/stdc++.h>
using namespace std;

int main()
{
    float lx, ly, ux, uy, cx, cy, r, l, w, x, y;
    int i, t;
    cin>>t;
    for(i = 0; i < t; i++)
    {
        cin>>lx>>ly>>ux>>uy>>cx>>cy>>r;
        l = 5.0 * r;
        w = 3.0 * r;
        x = (9.0 * l) / 20.0;
        y = w / 2.0;
        l += lx;
        w += ly;
        x += lx;
        y += ly;
        if(l == ux && w == uy && x == cx && y == cy)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
