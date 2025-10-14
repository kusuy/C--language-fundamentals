// WAP to check whether the number is a perfect number or not

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number to check a number is perfect or not");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + 1;
        }
    }
    if (n == sum)
    {
        printf("number = %d is perfect number\n", n);
    }
    else
    {
        printf("number = %d is not a perfect number.since divisor is not equal to n\n", n, sum);
    }
}