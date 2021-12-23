#include <stdio.h>
#include <string.h>

int main()
{
    char *ch[100] = { "Padma",
                    "Meghna",
                    "Jamuna",
                    "Korotoa"
                  };
    int i;
    for(i = 0; i < 4; ++i){
        printf("%s\n", ch[i]);
    }

    return 0;
}
