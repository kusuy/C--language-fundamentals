

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int i, j, count = 1;
    // Rows
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d", count);
        }
        printf("\n");
    }
    return 0;
}