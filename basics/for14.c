// table of n till x iteration

#include <stdio.h>
int main()
{
    int n, x, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the iterations: ");
    scanf("%d", &x);

    // start = 1, end = x, gap = 1

    for (i = 1; i <= x; i++)
    {
        int table = n * i;

        printf("%d * %d = %d\n", n, i, table);
    }
}