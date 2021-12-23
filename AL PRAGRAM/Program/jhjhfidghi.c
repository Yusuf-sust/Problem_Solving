#include <stdio.h>

int main()
{
    int score, grade;
    printf("\aPlease enter your score : ");
    scanf("%d", &score);

    grade = score / 10;
    switch (grade)
    {
    case  9 :
        printf("\n\  Your grade is A+");
        break;
    case  8 :
        printf("\n\a Your grade is A");
        break;
    case  7 :
        printf("\n\a Your grade is A-");
        break;
    case  6 :
        printf("\n\a Your grade is B+");
        break;
    case  5 :
        printf("\n\a Your grade is B");
        break;
    case 4 :
        printf("\n\a Your grade is C");
        break;
    default :
        if(grade >= 10)
            printf("Faul\n");
        else
            printf("\n\a Your grade is F");
        break;

    }

    return 0;
}
