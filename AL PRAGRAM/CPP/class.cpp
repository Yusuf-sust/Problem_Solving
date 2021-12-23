#include <iostream>
using namespace std;

class rec{
public:
    int height;
    int width;
    int area();
};

inline int rec::area()
{
    return height*width;
}

int main()
{
    rec obj;
    obj.height = 6;
    obj.width = 5;

    cout<<"Area = "<<obj.area()<<endl;

    return 0;
}
