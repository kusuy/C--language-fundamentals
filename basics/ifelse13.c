/*
13. WAP to check whether the number is
    a. positive -> yes then check whether the number is even or odd
    b. negative
    c. zero
*/
// input = 1, conditions = 3

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d is positive\n", num);
        if (num % 2 == 0)
        {
            printf("%d is even\n", num);
        }
        else
        {
            printf("number =% d is odd\n", num);
        }
    }
    else if (num < 0)
    {
        printf("number = %d is negative\n", num);
    }
    else
    {
        printf("number = %d is zero number\n", num);
    }
}