// wAP to accept input of size & print sum of element

#include <stdio.h>
int main()
{
    int arr[6], i, sum = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Enter element at position at %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    // display

    printf("Element are:\n");
    for (i = 0; i < 6; i++)
    {
        // sum =sum+arr[i];
        sum += arr[i];
    }
    // display total sum
    printf("\nTotal element sum is = %d\n,sum");
}