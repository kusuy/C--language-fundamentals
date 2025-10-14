// WAP to print table of 6 till 10 iteration
/*
6 * 1 = 6
    .
    .
    .
6 * 10 = 60
*/

#include <stdio.h>
int main()
{
    int i, table;

    for (i = 1; i <= 10; i++)
    {
        table = 6 * i;
        printf("6*%d = %d\n", i, table);
    }
    return 0;
}