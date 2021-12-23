#include <bits/stdc++.h>
using namespace std;

vector <char> vc;

void permutation()
{
    do
    {
        for(int i = 0; i < vc.size(); i++)
            cout<<vc[i];
        cout<<endl;
    }
    while(next_permutation(vc.begin(), vc.end()));
}

int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        char s[20];
        gets(s);
        for(int i = 0; s[i] != '\0'; i++)
            vc.push_back(s[i]);
        permutation();
        vc.clear();
    }

    return 0;
}
