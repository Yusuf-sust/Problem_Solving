#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sumx = 0.0, sumy = 0.0;
    int tx, bx, ty, by, i, j, x;
    cin>>tx>>bx;
    j = tx - 1;
    for(i = 0; i < tx; i++){
        cin>>x;
        sumx += x * pow(bx,j);
        j--;
    }
    cin>>ty>>by;
    j = ty - 1;
    for(i = 0; i < ty; i++){
        cin>>x;
        sumy += x * pow(by,j);
        j--;
    }
    if(sumx>sumy)
        cout<<">"<<endl;
    else if(sumx == sumy)
        cout<<"="<<endl;
    else
        cout<<"<"<<endl;

    return 0;

}
