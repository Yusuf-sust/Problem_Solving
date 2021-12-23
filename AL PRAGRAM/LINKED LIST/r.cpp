#include <bits/stdc++.h>
using namespace std;

char str[105];
int main()
{
    while(cin>>str+2)
    {
        str[0] = str[1] ='0';
        int len = strlen(str), ret;
        bool flag = false;
        for(int i=0; i<len-2; i++)
        {
            if(flag)
                break;
            for(int j=i+1; j<len-1; j++)
            {
                if(flag)
                    break;
                for(int k=j+1; k<len; k++)
                {
                    ret = (str[i]-'0')*100+(str[j]-'0')*10+str[k]-'0';
                    if(ret%8 == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag)
            printf("YES\n%d\n",ret);
        else
            puts("NO");
    }
    return 0;
}
