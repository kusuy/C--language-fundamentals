// WAP to print first 10 natural numbers in reverse order
// 10 9 8 7 6 5 4 3 2 1
// start = 10, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int i = 10; // start

    printf("First 10 natural number in reverse order are\n:");
    while (i >= 1)
    {
        printf("%d", i);
        // i = i -1;
        i--;
    }
    return 0;
}