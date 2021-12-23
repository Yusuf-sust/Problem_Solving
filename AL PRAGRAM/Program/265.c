#include<stdio.h>
#include<stdlib.h>
double max_int=2147483647;
char x[310],y[310],op;
int main()
{
    int t=0;
    while(scanf("%s %c %s",x,&op,y)!=EOF){
        printf("%s %c %s\n",x,op,y);
        double a,b;
        a=atof(x);
        b=atof(y);
        if(a>max_int) printf("first number too big\n");
        if(b>max_int) printf("second number too big\n");
        if((op=='+'&&a+b>max_int)||(op=='*'&&a*b>max_int)) printf("result too big\n");
    }
    return 0;
}
