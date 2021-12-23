#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE *r, *w;
    char s[100000], s1[100];
    r = fopen("Newfile.txt", "r");
    w = fopen("Newfile1.txt", "w");
    map<string,int> m;
    set<string>ss;
    fscanf(r,"%[^\n]", s);

    int i, j = 0, k;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ' || s[i+1] == '\0')
        {
            s1[j] = '\0';
            m[s1]++;
            ss.insert(s1);
            j = 0;
        }
        else s1[j++] = s[i];
    }

    set<string> :: iterator it;
    for(it = ss.begin(); it != ss.end(); it++)
    {
        cout<<*it<<" "<<m[*it]<<endl;
    }
    fclose(r);
    fclose(w);

    return 0;
}
