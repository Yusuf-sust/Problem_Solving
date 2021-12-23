#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5];
    p[0] = 6;
    p[1] = 7;
    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;
    delete [] p;

    return 0;
}
