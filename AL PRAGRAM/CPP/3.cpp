#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b)
    {
        height = a;
        width = b;
    }
    int area()
    {
        return height*width;
    }
};

int main()
{
    rectangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,2);
    obj[2].set(3,2);
    obj[3].set(4,2);
    obj[4].set(5,2);

    for(int i = 0; i < 5; ++i)
    {
        cout<<i<<" = "<<obj[i].area()<<endl;
    }

    return 0;
}
