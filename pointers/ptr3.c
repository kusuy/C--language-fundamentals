
// Create a char array of size 10
// accept input with the help of pointer
// and display characters

#include <stdio.h>
int main()
{
    char arr[10];

    char *ptr = arr;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter 10 character %d\n");
        scanf("%c", ptr + i);
    }
    printf("Elements are using postion\n");
    for (i = 0; i < 10; i++)
    {
        printf("%c", ptr + i);
    }
    return 0;
}
