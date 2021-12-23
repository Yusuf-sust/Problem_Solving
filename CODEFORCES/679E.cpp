#include <bits/stdc++.h>
using namespace std;

int n, m, pos;
char s[500005], dir[500005];

int a[500005];
int visit[500005];

/*int left(int pp)
{
    int p;
    for(int i = pp;;)
    {
        if(visit[i] == 1)
        {
            i = a[i]-1;
        }
        else
        {
            p =  i;
            break;
        }
    }
    return p;
}


int right(int pp)
{
    int p;
    for(int i = pp; ;)
    {
        if(visit[i]==1)
        {
            i = a[i]+1;
        }
        else
        {
            p = i;
            break;
        }
        //cout<<i<<endl;
    }
    if(p >= n)
        p = left(p-1);
    return p;
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d %d %d ", &n, &m, &pos);
    pos--;
    int left = pos-1, right = pos+1;
    gets(s);
    gets(dir);
    memset(visit,0,sizeof visit);
    //puts(s);
    //puts(dir);
    stack <int> stk;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(')
        {
            stk.push(i);
        }
        else
        {
            int p = stk.top();
            stk.pop();
            a[i] = p;
            a[p] = i;
            //cout<<a[p]<<endl<<a[i]<<endl;
        }

    }
    for(int i = 0; i < n; i++)cout<<a[i]<<endl;
    for(int i = 0; dir[i] != '\0'; i++)
    {
        if(dir[i] == 'D')
        {
            visit[pos] = 1;
            visit[a[pos]] = 1;
            if(pos <= left)
                left = pos-1;
            if(a[pos] <= left)
                left = a[pos]-1;
            if(a[pos] >= right)
                right = a[pos]+1;
            if(pos >= right)
                right = pos+1;
            if(right >= n)
                pos = left;
            else
                pos = right;
        }
        else if(dir[i] == 'R')
        {
            //cout<<"R"<<endl;
            pos = right;
            right += 1;
        }
        else
        {
            pos = left;
            left -= 1;
            //cout<<"L"<<endl;
        }
    }

    for(int i = 0; i < n; )
    {
        if(visit[i] == 0)
        {
            printf("%c", s[i++]);
        }
        else i = a[i]+1;
    }
    printf("\n");

    return 0;
}
