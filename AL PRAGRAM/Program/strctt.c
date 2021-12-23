#include <stdio.h>
#include <string.h>

struct student
{
    int sid, reg;
    char name[50], dept[10];
    double cgpa;
} user[10], temp;

void sort()
{
    int i, j;
    for(i  = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(user[i].cgpa < user[j].cgpa)
            {
                temp = user[i];
                user[i] = user[j];
                user[j] = temp;
            }
            else if(user[i].cgpa == user[j].cgpa)
            {
                if(strcmp(user[i].name, user[j].name) > 0)
                {
                    temp = user[i];
                    user[i] = user[j];
                    user[j] = temp;
                }
            }
        }
    }
}
int main()
{
    int i, j, k, m, n;
    for(i = 0; i < 5; i++)
    {
        scanf("%d %d %s %s %lf", &user[i].sid, &user[i].reg, user[i].name, user[i].dept, &user[i].cgpa);
    }
    sort();
    for(i = 0; i < 5; i++)
    {
        printf("Serial no :\t%d\nReg no :\t%d\nName :\t%s\nDept. :\t%s\nCGPA :\t%.2lf\n", user[i].sid, user[i].reg, user[i].name, user[i].dept, user[i].cgpa);
    }

    return 0;
}
