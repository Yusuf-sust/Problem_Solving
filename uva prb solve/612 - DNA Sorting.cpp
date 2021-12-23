#include <bits/stdc++.h>
using namespace  std;

struct dna
{
    string s;
    int r;
    bool operator < (const dna&p)
    const
    {
        return r<p.r;
    }
};

string s1;

int rev(int n)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(s1[i] > s1[j])
                res++;
        }
    }
    return res;
}

int main()
{
    int M, n, p;
    scanf("%d", &M);
    int i, j, k;
    for(i = 0; i < M; i++)
    {
        if(i)
        {
            printf("\n");
        }
        scanf("%d %d", &n, &p);
        vector <dna> v;
        for(j = 0; j < p; j++)
        {
            cin>>s1;
            struct dna x;
            x.s = s1;
            int f = rev(n);
            x.r = f;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int it;
        for(it = 0; it < v.size(); it++)
        {
            cout<<v[it].s<<endl;
        }
    }

    return 0;
}
