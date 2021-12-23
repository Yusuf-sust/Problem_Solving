#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t;
    char s1[10], s2[10];
    cin>>t;
    for(i = 0; i < t; i++)
    {
        scanf("%s %s", s1, s2);
        if(strcmp(s1, "JAN") == 0 || strcmp(s1, "MAR") == 0 || strcmp(s1, "MAY") == 0 || strcmp(s1, "JUL") == 0 || strcmp(s1, "AUG") == 0 ||strcmp(s1, "OCT") == 0 || strcmp(s1, "DEC") == 0)
        {
            if(strcmp(s2, "THU") == 0 || strcmp(s2, "FRI") == 0)
                cout<<10<<endl;
            else if(strcmp(s2, "WED") == 0 || strcmp(s2, "SAT") == 0)
                cout<<9<<endl;
            else cout<<8<<endl;
        }
        else if(strcmp(s1, "APR") == 0 || strcmp(s1, "JUN") == 0 || strcmp(s1, "SEP") == 0 || strcmp(s1, "NOV") == 0)
        {
            if(strcmp(s2, "THU") == 0 || strcmp(s2, "SAT") == 0)
                cout<<9<<endl;
            else if(strcmp(s2, "FRI") == 0)
                cout<<10<<endl;
            else cout<<8<<endl;
        }
        else cout<<8<<endl;
    }

    return 0;
}
