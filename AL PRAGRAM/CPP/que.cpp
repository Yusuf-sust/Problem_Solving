#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> q;
    int i, n;
    for(i = 0; i < 5; i++){
        cin>>n;
        q.push(n);
    }
    //q.push(100);
    //q.push(1000);
    //q.push(10000);
    while( !q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
