// Take input in string -> Full Line including space but size specific

#include <stdio.h>
int main()
{
    // Declare a string
    char str[10];

    printf("Enter message: ");
    fgets(str, 10, stdin); // Entire line as input but only fixed character length

    printf("Message = %s\n", str);
}