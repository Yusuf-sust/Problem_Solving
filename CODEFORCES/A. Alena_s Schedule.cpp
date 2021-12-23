#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110], i, j, n, count = 0;
    memset(a, 0, sizeof(a));
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>a[i];
    }
    for(i = 1; i <= n; i++){
        if(a[i] == 0 && (a[i-1] == 0 || a[i+1] == 0))
            continue;
        else
            count++;
    }
    cout<<count<<endl;

    return 0;
}
