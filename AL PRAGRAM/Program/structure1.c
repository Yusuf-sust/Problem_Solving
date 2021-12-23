#include <stdio.h>

struct stu
{
    int roll;
    double cgpa, credit;
};

int main()
{
    struct stu a[100], b[10];
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        scanf("%d %lf %lf", &a[i].roll, &a[i].credit, &a[i].cgpa);
    }
    for(i = 1; i< 5; i++)
    {
        for(j = i+1; j <= 5; j++)
        {
            if(a[i].cgpa < a[j].cgpa)
            {
                b[0] = a[i];
                a[i] = a[j];
                a[j] = b[0];
            }
            else if(a[i].cgpa == a[j].cgpa)
            {
                if(a[i].credit > a[j].credit)
                {
                    b[0] = a[i];
                    a[i] = a[j];
                    a[j] = b[0];
                }
            }
        }
    }
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t%.2lf\t%.2lf\n", a[i].roll, a[i].credit, a[i].cgpa);
    }

    return 0;

}
