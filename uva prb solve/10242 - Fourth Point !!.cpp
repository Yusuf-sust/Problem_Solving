#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, x1, x2, x3, x4, y, y1, y2, y3, y4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
        if(x2 == x3 && y2 == y3)
        {
            x = x1 + x4 - x2;
            y = y1 + y4 - y2;
        }
        else if(x1 == x3 && y1 == y3)
        {
            x = x2 + x4 - x1;
            y = y2 + y4 - y1;
        }
        else if(x1 == x4 && y1 == y4)
        {
            x = x2 + x3 - x1;
            y = y2 + y3 - y1;
        }
        else
        {
            x = x1 + x3 - x2;
            y = y1 + y3 - y2;
        }
        printf("%.3lf %.3lf\n", x, y);
    }

    return 0;
}
