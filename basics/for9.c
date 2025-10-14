// 3. WAP to print first n natural number in reverse orders
// n .... 3 2 1
// start = n, stop = 1, gap = -1

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}