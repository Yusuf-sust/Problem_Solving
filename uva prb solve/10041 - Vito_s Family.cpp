#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, n, x, sum, res;
    scanf("%d", &t);
    while(t--)
    {
        sum = 10000000000;
        vector<int> v;
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int s = v.size();
        for(i = v[0]; i <= v[s-1]; i++)
        {
            res = 0;
            for(j = 0; j < s; j++)
            {
                res += abs(v[j] - i);
            }
            if(res < sum)
                sum = res;
        }

        printf("%d\n", sum);
    }

    return 0;
}
