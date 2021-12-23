#include <iostream>
using namespace std;
#include <stack>

int main()
{
    int n;
    stack< int > st;
    for(int i = 0; i < 3; ++i){
        cin>>n;
        st.push(n);
    }
    //st.push(100);
    //st.push(1000);
   // st.push(10000);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
