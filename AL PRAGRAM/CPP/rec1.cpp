#include <bits/stdc++.h>
using namespace std;

void rec(int n)
{
    if(n <= 0)
        return;
    else{
        rec(n-1);
        rec(n-2);
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    rec(n);

    return 0;
}

