#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("food.txt", "r", stdin);
    freopen("seamm.txt", "w", stdout);
    char s[100000], s1[100];
    map<string,int> m;
    set<string>ss;
    while(gets(s))
    {
        int i, j = 0, k;
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == ' ' || s[i+1] == '\0')
            {
                if(s[i+1] == '\0')
                {
                    s1[j++] = s[i];
                }
                s1[j] = '\0';
                m[s1]++;
                ss.insert(s1);
                j = 0;
            }
            else s1[j++] = s[i];
        }
    }
    set<string> :: iterator it;
    for(it = ss.begin(); it != ss.end(); it++)
    {
        cout<<*it<<" "<<m[*it]<<endl;
    }

    return 0;
}
