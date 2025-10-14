

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter size: ");
    scanf("%D", &n);
    // Upper half
    // Rows

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // for lower half
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}