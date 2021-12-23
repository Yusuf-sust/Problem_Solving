#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<int> :: iterator it;
    vector<int> :: reverse_iterator itr;

    for(int i = 0; i < 10; i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    cout<<"fl :"<<endl;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"lf :"<<endl;
    for(itr = v.rbegin(); itr != v.rend(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"max size : "<<v.max_size()<<endl;

    cout<<"position : "<<v[3]<<endl;
    cout<<"value : "<<v.at(3)<<endl;
    cout<<"front : "<<v.front()<<endl;
    cout<<"back : "<<v.back()<<endl;

    return 0;
}
