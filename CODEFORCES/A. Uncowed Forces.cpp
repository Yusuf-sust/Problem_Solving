#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ha, hw, sum = 0, x = 500.0, y;
    int i, count = 0;
    for(i = 0; i < 5; i++){
        cin>>y;
        sum += (1 - (y/250.0))*x;
        x += 500.0;
    }
    for(i = 0; i < 5; i++){
        cin>>y;
        count += y;
    }
    sum -= (double)(count * 50);
    cin>>ha>>hw;
    sum += ha*100.0;
    sum -= hw*50.0;
    cout<<sum<<endl;

    return 0;
}
