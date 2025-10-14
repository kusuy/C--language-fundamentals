// 2. WAP to print cube of 1 to n
// start = 1, stop = n, gap = 1

#include <stdio.h>
int main()
{
    int i, cube, n;
    printf("Enter a number");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf("The cube of %d = %d\n", i, cube);
    }
    return 0;
}