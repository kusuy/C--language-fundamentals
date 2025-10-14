// WAP to accept a number continuously unless user press 0 to exit
// whatever numebr user passes do sum and after exit display sum
// 5+4+3 = 12

#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {

        printf("Enter a number to show addition until press 0 to exit");
        scanf("%d", &n);

        sum = n + sum;

    } while (n == 0);

    printf("Its time to stop and final sum\n", n, sum);
}