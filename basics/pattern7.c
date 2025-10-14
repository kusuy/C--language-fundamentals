
// Right Angled Triangle pattern
/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter size:");
    scanf("%d", &n);
    // Rows
    for (i = n; i >= i; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
