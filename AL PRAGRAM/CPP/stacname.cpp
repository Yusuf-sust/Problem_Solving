#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    int i, j, k, n;
    stack<string>ss;
    scanf("%d ", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", s);
        if(strcmp(s,"Sleep") == 0)
        {
            scanf("%s", s);
            ss.push(s);
        }
        else if(strcmp(s, "Test") == 0)
        {
            if(!ss.empty())
                cout<<ss.top()<<endl;
            else
                cout<<"Not in a dream"<<endl;
        }
        else{
                if(!ss.empty())
            ss.pop();
        else continue;
        }
    }

    return 0;
}
