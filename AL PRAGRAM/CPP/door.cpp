#include <bits/stdc++.h>
using namespace std;

char s[100][100];

void door(int i, int j)
{
    if(s[i-1][j] == ' '){
        s[i-1][j] = '#';
        door(i-1,j);
    }
    if(s[i][j-1] == ' '){
        s[i][j-1] = '#';
        door(i,j-1);
    }
    if(s[i][j+1] == ' '){
        s[i][j+1] = '#';
        door(i,j+1);
    }
    if(s[i+1][j] == ' '){
        s[i+1][j] = '#';
        door(i+1,j);
    }
}

int main()
{
    int i, j, t, k, len, y, m;
    char st[100], sc[100];
    scanf("%d ", &t);
    while(t--)
    {
        memset(s, 'X', sizeof(s));
        j = 1;

        while(gets(st)){
            len = strlen(st);
            y = 0;
            for(m = 0; m < len; m++){
                if(st[m] == '_'){
                    y++;
                }
                else break;
            }
            if(y == len){
                strcpy(sc, st);
                break;
            }
            strcpy(s[j++]+1, st);
        }
        for(i = 1; i < j; i++){
            for(k = 1; k <= 90; k++){
                if(s[i][k] == '*'){
                    s[i][k] = '#';
                    door(i,k);
                }
            }
        }
        for(i = 1; i < j; i++)
        {
            strcpy(st, s[i]);
            puts(st+1);
        }
        puts(sc);
    }

    return 0;
}
