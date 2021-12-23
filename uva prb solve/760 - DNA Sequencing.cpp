#include <bits/stdc++.h>
using namespace std;

char s1[4000], s2[4000], s3[4000], s4[4000];
int a[4000][4000], b[4000][4000];

int main()
{
    int i, j, max, l1, l2, t = 1, l;
    set <string> s;
    while(gets(s1))
    {
        gets(s2);
        if(t > 1)
        {
            printf("\n");
        }
        t++;
        l1 = strlen(s1);
        l2 = strlen(s2);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        max = 0;
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
                }
            }
        }
        if(max == 0)
        {
            printf("``No common sequence.\"\n");
            continue;
        }
        for(i = 1; i <= l1; i++)
        {
            for(j = 1; j <= l2; j++)
            {
                if(a[i][j] == max && b[i][j] == 1)
                {
                    int x = i, y = j, p = 0;
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
                    int f = 0;
                    for(l = p-1; l >= 0; l--)
                    {
                        s4[f] = s3[l];
                        f++;
                    }
                    s4[f] = '\0';
                    s.insert(s4);
                }
            }
        }
        set< string > :: iterator it;
        for(it = s.begin(); it != s.end(); it++)
        {
            cout << *it << endl;
        }
        s.clear();
        gets(s4);
    }

    return 0;
}


