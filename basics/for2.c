// WAP to print first n natural numbers
// start = 1; stop = n; gap = 1;

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number:");
    scanf("%d\n", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}