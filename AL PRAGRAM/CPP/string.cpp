#include <iostream>
using namespace std;
#include <string>

int main()
{
    string a, b, c;
    a = "My name is Yusuf.";
    b = "My friend is Sky";
    c = a + " " + b;
    cout<<c<<endl;
    cout<<c.size()<<endl;
    for(int i = 0; i < c.size(); i++)
    {
        if(c[i] == ' ')
            continue;
        else
            cout<<c[i]<<" ";
    }

    return 0;
}
