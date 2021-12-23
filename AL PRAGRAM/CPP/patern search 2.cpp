#include <bits/stdc++.h>
using namespace std;

void make(int *lfs, int m, char *pat)
{
    int ln = 0;
    lfs[0] = 0;
    int i = 1;
    while(i < m)
    {
        if(pat[i] == pat[ln])
        {
            ln++;
            lfs[i++] = ln;
        }
        else
        {
            if(ln != 0)
                ln = lfs[ln-1];
            else
            {
                lfs[i++] = 0;
            }
        }
    }
}

void paternsearch(char *pat, char *txt)
{
    int n = strlen(txt);
    int m = strlen(pat);
    int *lfs = (int *)malloc(sizeof(int) *m);
    make(lfs,m,pat);
    int i, j;
    i = 0, j = 0;
    while(i < n)
    {
        if(pat[j] == txt[i])
        {
            i++, j++;
        }
        if(j == m)
        {
            printf("Patern found at position %d\n", i-j + 1);
            j = lfs[j-1];
        }
        else if(i < n && pat[j] != txt[i])
        {
            if(j != 0)
                j = lfs[j-1];
            else i = i + 1;
        }
    }
    free(lfs);
}

int main()
{
    int t;
    char pat[1000], txt[10000];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(txt);
        gets(pat);
        paternsearch(pat, txt);
    }

    return 0;
}
