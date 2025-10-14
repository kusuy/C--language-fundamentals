// WAP to check whether the number is zero or non zero
// input = 1, conditions = 2

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("num = The number is zero\n", num);
    }
    else
    {
        printf("num = the number is non zero\n", num);
    }
    return 0;
}