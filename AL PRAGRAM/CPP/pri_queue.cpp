#include <iostream>
using namespace std;
#include <queue>

int main()
{
    int n, i;
    priority_queue<int> pq;
    for(i = 0; i < 5; ++i){
        cin>>n;
        pq.push(n);
    }

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}
