// 1. WAP to print first 10 even numbers
// 2 4 6 8 10 12 14 16 18 20
// start = 2, stop = 20, gap = 2

#include <stdio.h>
int main()
{
    int i;

    for (i = 2; i <= 20; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}
