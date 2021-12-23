#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110], b[110], i, j, sum = 0, p, x, m, n;
    cin>>p>>x;
    for(i = 0; i < p; i++)
    {
        cin>>m>>n;
        a[i] = m;
        b[i] = n;
    }
    for(i = 0; i < (p-1); i++)
    {
        for(j = i+1; j < p; j++)
        {
            if(a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(i = 0; i < p; i++)
    {
        sum += (x - a[i]);
        if(sum < b[i])
            sum += b[i] - sum;
        x = a[i];
    }
    sum += x;
    cout<<sum<<endl;

    return 0;
}
