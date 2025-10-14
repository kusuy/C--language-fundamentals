// WAP to print square of first 10 natural numbers
// The square of 1 is 1
// The square of 2 is 4
// The square of 3 is 9
// The square of 10 is 100

#include <stdio.h>
int main()
{
    int i, square;

    for (i = 1; i <= 10; i++)
    {
        square = i * i;
        printf("The square of %d = %d\n", i, square);
    }
    return 0;
}
