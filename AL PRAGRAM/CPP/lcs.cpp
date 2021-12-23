#include <bits/stdc++.h>
using namespace std;

char s1[1000], s2[1000], s3[1000];
int a[1000][1000], b[1000][1000];

int main()
{
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    int i, j, max = -1000, ai, aj, l1, l2;
    gets(s1);
    gets(s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    for(i = 1; i <= l1; i++)
    {
        for(j = 1; j<= l2; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                a[i][j] = a[i-1][j-1] + 1;
                b[i][j] = 1;
            }
            else if(a[i-1][j] >= a[i][j-1])
            {
                a[i][j] = a[i-1][j];
                b[i][j] = 2;
            }
            else
            {
                a[i][j] = a[i][j-1];
                b[i][j] = 3;
            }
            if(a[i][j] > max)
            {
                max = a[i][j];
                ai = i, aj = j;
            }
        }
    }
    cout<<max<<endl;
    int x = ai, y = aj, p = 0;
    while(x > 0 && y > 0)
    {
        if(b[x][y] == 1)
        {
            s3[p++] = s1[x-1];
            x--, y--;
        }
        else if(b[x][y] == 2)
        {
            x--, y = y;
        }
        else if(b[x][y] == 3)
        {
            x = x, y--;
        }
    }
    s3[p] = '\0';
    for(i = p-1; i >= 0; i--)
    {
        cout<<s3[i];
    }
    cout<<endl;

    return 0;
}
