#include <iostream>
using namespace std;

class rectengle
{
    int height;
    int weight;
public:
    void set(int h, int w);
    int area();
};

inline int rectengle::area()
{
    return height*weight;
}

void rectengle::set(int h, int w)
{
    height = h;
    weight = w;
}

int main()
{
    rectengle obj;
    obj.set(6,5);
    cout<<"Area = "<<obj.area()<<endl;


    return 0;
}
