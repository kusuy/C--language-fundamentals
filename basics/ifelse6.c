/*Accept marks of 5 subject calculate sum and percentage based on percentage / avg display grades
 percentage is between 90 to 100 -> A
 percentage is between 75 to 89 -> B
 percentage is between 60 to 74 -> C
 percentage is between 35 to 59 -> D
 percentage is below 35 -> F
 */
// input = 5, variable = 7

#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, percentage;

    printf("Enter the marks of subject1\n");
    scanf("%d", &m1);
    printf("Enter the marks of subject2\n");
    scanf("%d", &m2);
    printf("Enter the marks of subject3\n");
    scanf("%d", &m3);
    printf("Enter the marks of subject4\n");
    scanf("%d", &m4);
    printf("Enter the marks of subject5\n");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5;

    printf("total obtained marks = %d\n", sum);
    printf("percentage = %d\n", percentage);

    printf("Grade =  ");
    if (percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 75)
    {
        printf("GRade = B\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade = C\n");
    }
    else if (percentage >= 35)
    {
        printf("Grade = D\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}
