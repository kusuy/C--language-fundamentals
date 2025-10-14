// WAP to print first 10 natural numbers in reverse order
// 10 9 8 7 6 5 4 3 2 1
// start = 10, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int i = 10;
    printf("First 10 natural numbers in reverse order\n");

    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}