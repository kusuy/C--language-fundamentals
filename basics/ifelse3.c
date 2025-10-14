// WAP to check whether the number is divisible by 3 or not
// divisible by 3 means -> divide number by 3 and check remainder (%)
// if remainder == 0 -> then number is divisible by 3
// if remainder != 0 -> then number is not divisible by 3

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", num);

    int remainder = num % 3;

    if (remainder == 0)
    {
        printf("number = %d id divisible by 3\n", num);
    }

    else
    {
        printf("number = %d is not divisible by 3\n", num);
    }
    return 0;
}

