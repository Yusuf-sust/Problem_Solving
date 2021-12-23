#include <bits/stdc++.h>
using namespace std;

int isprime(int n);

int main()
{
    int  n, i, sum;
    while(cin>>n)
    {
        if(n == 0)
            break;
        sum = 0;
        for(i = 2; i <= n / 2; i ++)
        {
            if(isprime(i))
            {
                if(isprime(n - i))
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
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

