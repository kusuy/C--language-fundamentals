// Take input in string -> Full Line including space

#include <stdio.h>
int main()
{
    // Declare a string
    char str[10];

    printf("Enter message: ");
    gets(str); // Entire line as input

    printf("Message = %s\n", str);
}