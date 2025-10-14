// Patterns 5

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int i, j;
    char alp = 'A';
    // Rows
    for (i = 1; i <= n; i++)
    {
        // column
        for (j = 1; j <= n; j++)
        {
            printf("%c", alp);
        }
        printf("\n");
    }
    return 0;
}
/*
1.
n = 5
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

2.
n=5
* * * * *
*       *
*       *
*       *
* * * * *

*/
