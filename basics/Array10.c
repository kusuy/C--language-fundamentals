// from given array
// 5,1,7,9,3
// accept search element -> 9
// element found at index 3

#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 7.9, 3};
    int i, element;
    int lenght = sizeof(arr) / sizeof(arr[0]);

    printf("Enter a element\n");
    scanf("%d", &element);

    for (i = 0; i < lenght; i++)
    {
        if (element == i)
        {
            printf("element = %d  is found\n", i, element);
        }

        else
        {

            printf("element = %d is not found\n", i, element);
        }
    }
}
