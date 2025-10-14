// Accept percentage and display grades based on below criteria
/*
percentage is between 90 to 100 -> A
percentage is between 75 to 89 -> B
percentage is between 60 to 74 -> C
percentage is between 35 to 59 -> D
percentage is below 35 -> F
*/
// input = 1, conditions =
/*
int m1,m2,m3,m4,m5;
int sum, percentage
input -> m1,m2,m3,m4,m5
sum = m1+m2+m3+m4+m5
percentage = sum / 5
Accept marks of 5 subject calculate sum and percentage based on percentage display grades
percentage is between 90 to 100 -> A
percentage is between 75 to 89 -> B
percentage is between 60 to 74 -> C
percentage is between 35 to 59 -> D
percentage is below 35 -> F
*/

#include <stdio.h>
int main()
{
    int percentage;
    scanf("%d", &percentage);

    if (percentage >= 90)
    {
        printf(" A");
    }
    else if (percentage >= 75)
    {
        printf(" B");
    }
    else if (percentage >= 60)
    {
        printf("C");
    }
    else if (percentage >= 35)
    {
        printf(" D");
    }
    else
    {
        printf("fail");
    }
    return 0;
}
