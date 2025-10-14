// WAP to accept a number and display square of that number
// unless user press 0 to exit

#include <stdio.h>
int main()
{
    int n;
    do
    {

        printf("Enter a number to display square or press 0 to exit");
        scanf("%d", &n);

        if (n == 0)
        {
            printf("thanks for playimg. Do visit again\n");
            break;
        }
        int square = n * n;

        printf("The square of %d = %d\n", n, square);

    } while (n != 0);
}