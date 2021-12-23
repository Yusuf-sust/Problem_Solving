#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int>chek;

void vec(int n);
int big();
int small();

int main()
{
    int n, b, s, temp, c, i;
    while(cin>>n)
    {
        if(n == 0)
            break;
        c = 1;
        printf("Original number was %d\n", n);
        vec(n);
        b = big();
        s = small();
        temp = b - s;
        chek.push_back(temp);
        v.clear();
        int flag = 1;
        printf("%d - %d = %d\n", b, s, temp);
        while(1)
        {
            vec(temp);
            b = big();
            s = small();
            v.clear();
            temp = b - s;
            c++;
            printf("%d - %d = %d\n", b, s, temp);
            for(i = 0; i < chek.size(); ++i)
            {
                if(temp == chek[i])
                {
                    flag = 0;
                    break;
                }
            }
            if(!flag)
                break;
            else
                chek.push_back(temp);
        }
        printf("Chain length %d\n", c);
        printf("\n");
        chek.clear();
    }

    return 0;
}

void vec(int n)
{
    while(n > 0)
    {
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(), v.end());
}

int big()
{
    int i, x = 0;
    int s = v.size();
    for(i = s - 1; i >= 0; --i)
    {
        x = x * 10 + v[i];
    }

    return x;
}

int small()
{
    int i, x = 0;
    int s = v.size();
    for(i = 0; i < s; ++i)
    {
        x = x * 10 + v[i];
    }

    return x;
}
