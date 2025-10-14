// WAP to check whether the number is positive or negative or zero
// Input = 1, COndition = 3
// if else if else

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("num = %d is postive\n", num);
    }
    else if (num < 0)
    {
        printf("num = %d is negative\n", num);
    }
    else
    {
        printf("num = %d is zero\n", num);
    }
    return 0;
}