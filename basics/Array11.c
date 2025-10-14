// Sort the given array

// 5,1,7,9,3

#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 7, 9, 3};
    int i, j, temp;

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Elements before sorting\n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }

    // Sort
    // Bubble sort

    // num of pass
    for (i = 0; i < len - 1; i++)
    {
        // Each pass we have to check current from next
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nAfter sorting array is= \n");
    for (i = 0; i < len; i++)
    {
        printf("%d\t", arr[i]);
    }
}

// Find max and min element in given array
// 5,100,-6,20,-25
// min = -25
// max = 100

#include <stdio.h>
int main()
{
    int arr[] = {5, 100, -6, 20, -25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("min =  %d\n", &min);
    printf("max = %d\n", &max);
}