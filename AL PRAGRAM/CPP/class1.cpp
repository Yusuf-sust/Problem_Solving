#include <iostream>
using namespace std;

class rect{
    int height;
    int width;
public:
    void set(int h, int w);
    int area();

};

int rect::area()
{
    return height*width;
}

void rect::set(int h, int w)
{
    height = h;
    width = w;
}

int main()
{
    int m, n;
    cin>>m>>n;
    rect obj;
    obj.set(m,n);
    cout<<"Area = "<<obj.area()<<endl;

    return 0;
}
