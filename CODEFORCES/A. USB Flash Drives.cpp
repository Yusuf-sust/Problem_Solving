#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000], i, j, t, m, count, sum;
    cin>>t>>m;
    for(i = 0; i< t; i++)
        cin>>a[i];
    sort(a, a+t);
    count = 0;
    sum = 0;
    for(j = t - 1; j >= 0; j--){
        count++;
        sum += a[j];
        if(sum >= m)
            break;
    }
    cout<<count<<endl;

    return 0;
}
