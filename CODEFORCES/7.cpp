#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f, i, t;
    char s[100];
    scanf("%d %d %d", &f, &i, &t);
    getchar();
    int sum = 0;
    for(int j = 0; j < f; j++)
    {
        int cnt = 0;
        scanf("%s", s);
        for(int k = 0; s[k] != '\0'; k++)
            if(s[k] == 'Y') cnt++;
        if(cnt >= t) sum++;
        getchar();
    }
    printf("%d\n", sum);

    return 0;
}
