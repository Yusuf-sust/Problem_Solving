#include <bits/stdc++.h>
using namespace std;

char ar[100];
int taken[100], n, prev[100];
vector<char> result;

void permutation()
{
    if(result.size() == 2)
    {
        for(int i = 0; i < 2; i++)
        {
            cout<<result[i];
        }
        cout<<endl;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(taken[i] == 0)
        {
            taken[i] = 1;
            result.push_back(ar[i]);
            permutation();
            taken[i] = 0;
            result.pop_back();
        }
    }
}

int main()
{
    int m;
    cin>>m;
    getchar();
    while(m--)
    {
        gets(ar);
        n = strlen(ar);
        permutation();
    }

    return 0;
}
