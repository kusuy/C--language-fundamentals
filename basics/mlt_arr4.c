// WAP to display sum of elements
/*
2,4,6
3,8,9
1,3,5
*/

#include <stdio.h>
int main()
{
    int arr[3][3] = {{2, 4, 6},
                     {3, 8, 9},
                     {1, 3, 5}};

    int i, j;
    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("sum of element =%d\n", sum);
}