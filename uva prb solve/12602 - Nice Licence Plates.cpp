#include <bits/stdc++.h>

int main()
{
    char ch;
    vector<char> chh;
    int i, j, x, y, sum, ab, t, n;
    cin>>t;
    for(i = 0; i < t; ++i)
    {
        sum = 0;
        y = 2;
        for(j = 0; j < 3; ++j)
        {
            cin>>ch;
            v.push_back(ch);
            x = (int)v[j] - 65;
            sum += x * pow(26, y);
            y--;
        }
        getchar();
        cin>>n;
        ab = abs(sum - n);
        cout<<ab<<endl;
        if(ab <= 100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }

    return 0;
}

