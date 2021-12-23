#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a[100], n;
    while(cin>>n){
        for(i = 0; i < n; i++){
            cin>>a[i];
        }
        for(i = 1; i < n-1; i++){
            if(a[i] % 2 == 0 && (a[i-1] %2 == 0 || a[i+1] % 2 == 0))
                cout<<a[i]<<" ";
            else if(a[i] % 2 == 1 && (a[i-1] % 2 == 1 || a[i+1] % 2 == 1))
                cout<<a[i]<<" ";
        }
        if(a[i] % 2 == 0 && (a[i-1] %2 == 0 || a[i+1] % 2 == 0))
                cout<<a[i]<<endl;
        else if(a[i] % 2 == 1 && (a[i-1] % 2 == 1 || a[i+1] % 2 == 1))
                cout<<a[i]<<endl;
    }

    return 0;
}
