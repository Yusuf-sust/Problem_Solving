#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long long ar[100];
    for(int i = 0; i < 5; ++i)
        cin>>ar[i];
    sort(ar, ar+5);
    for(int j = 0; j < 5; ++j)
        cout<<ar[j]<<endl;

    return 0;
}
