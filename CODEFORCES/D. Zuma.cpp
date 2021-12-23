#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000], i, j, k,time, n, x, count1 = 0, count = 0;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>x;
        a[x]++;
    }
    for(i = 1; i <= n; i++){
        if(a[i] % 2== 0 && a[i] != 0)
            count++;
        else if(a[i] % 2 == 1 && a[i] != 0)
            count1++;
    }
    if(count){
        time = count1 - 1;
    }
    else time = count1;
    if(time)
    cout<<time<<endl;
    else
        cout<<1<<endl;

    return 0;
}
