#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector< int > v, t;
    vector<vector<int> > v1;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    t = v;

    for(i = 0; i < t.size(); ++i)
    {
        cout<<t[i]<<endl;

    }

    return 0;
}
