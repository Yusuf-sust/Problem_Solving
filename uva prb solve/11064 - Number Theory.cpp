#include <bits/stdc++.h>
using namespace std;
vector <long long int> v;
#define max 100000000000

int main()
{
    long long int n, i, j, count, k;
    for(k = 0; k <= max; ++k){
        count = 0;
        for(i = 1; i <= k; ++i){
            j = __gcd(i,k);
            if(j != 1 && j != i)
                count++;
        }
       v.push_back(count);
    }
    while(cin>>n){
        cout<<v[n]<<endl;
    }

    return 0;
}
