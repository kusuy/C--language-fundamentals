// Find max and min element in given array
// 5,100,-6,20,-25
// min = -25
// max = 100

#include <stdio.h>
int main()
{
    int arr[] = {5, 100, 20, -6, -25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }
    printf("max = maximum element is %d\n", max);
    printf("min = minimum element is %d\n", min);
}