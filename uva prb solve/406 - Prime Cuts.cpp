#include <bits/stdc++.h>
using namespace std;

int isprime(int n);

int main()
{
    vector <int> v;
    int m, n, i, sum;
    while(cin>>m>>n)
    {
        sum = 0;
        for(i = 1; i <= m;)
        {
            if(isprime(i))
            {
                sum++;
                v.push_back(i);
            }
            if(i < 3)
            {
                i++;
            }
            else
                i += 2;
        }
        cout<<m<<' '<<n<<':'<<' ';
        if(n == 0){
            cout<<v[sum/2]<<endl;
        }
        else if(sum < 2 * n)
        {
            for(i = 0; i < sum - 1; ++i)
            {
                cout<<v[i]<<' ';
            }
            cout<<v[i]<<endl;
        }
        else if(sum % 2 == 0)
        {
            for(i = (sum/2) - n; i < (sum/2) + (n-1); ++i)
                cout<<v[i]<<' ';
            cout<<v[i]<<endl;
        }
        else
        {
            for(i = (sum/2) - (n - 1); i < (sum/2) + (n - 1); ++i)
                cout<<v[i]<<' ';
            cout<<v[i]<<endl;
        }
        cout<<endl;
        v.clear();
    }

    return 0;
}

int isprime(int n)
{
    int flag = 1, i;
    for(i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        return 1;
    else
        return 0;
}
