#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long> v;
    long n, flag = 1, i, j;
    cin>>n;
    if(n == 0)
    {
        cout<<"10"<<endl;
    }
    else if(n >= 1 && n < 10)
    {
        cout<<n<<endl;
    }
    else
    {
        for(i = 9; i > 1; i--)
        {
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    v.push_back(i);
                    flag = 0;
                    n /= i;
                }
            }
        }
        if(flag)
            cout<<-1<<endl;
        else
        {
            sort(v.begin(), v.end());
            for(j = 0; j < v.size(); j++)
                cout<<v[j];
            cout<<endl;
        }
    }
    return 0;

}
