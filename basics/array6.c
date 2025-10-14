// Array ->  to store multiple same data in contingous form (collection)

#include <stdio.h>
int main()
{
    // Array declare
    // data_type ,Array_name(size)

    int arr[5];
    int i;
    // input 5 times
    for (i = 0; i = 5; i++)
    {
        printf("Enter element at position %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    // display
    printf("Elemet are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}