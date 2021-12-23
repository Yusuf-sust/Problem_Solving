#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int ar[100];
    for(int i = 0; i < 5; ++i)
        cin>>ar[i];
    for(int i = 0; i < 5; ++i)
        cout<<ar[i]<<' ';
    cout<<endl;
    sort(ar, ar+5);
    for(int i = 0; i < 5; ++i)
        cout<<ar[i]<<' ';

    return 0;
}
