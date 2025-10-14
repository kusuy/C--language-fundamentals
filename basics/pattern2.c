

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int i, j;
    // ROWS
    for (i = 1; i <= n; i++)
    {
        // columns
        for (j = 1; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}