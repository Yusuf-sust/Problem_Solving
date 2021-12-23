#include <stdio.h>

struct stud
{
    char NAME[32], DEPT[3];
    int Reg, Session;
    double CGPA;
};
//stud x[100];
int main()
{
    struct stud x[100];
    int i, n;
    scanf("%d ", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%s %s %d %d %lf", &x[i].NAME, &x[i].DEPT, &x[i].Reg, &x[i].Session, &x[i].CGPA);
    }
    for(i = 0; i <n; ++i)
    {
        printf("%d :\n ", i+1);
        printf(" Name: %s\n Dept. %s\n Reg: %d\n Session: %d\n CGPA: %.2lf\n", x[i].NAME, x[i].DEPT, x[i].Reg, x[i].Session, x[i].CGPA);
    }

    return 0;
}
