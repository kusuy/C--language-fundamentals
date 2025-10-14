// WAP to check whether the number is positive or negative
// Input -> 1, Conditions -> 2 if(condition) -- else

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Number =  %d number is positive\n", num);
    }
    else
    {

        printf("Number %d number is negative\n", num);
    }
    return 0;
}