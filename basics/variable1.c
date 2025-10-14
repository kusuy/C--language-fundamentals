// WAP to print value and address of
// integer as well as character variable

// TASK -> include float pi = 3.14 and double d -> 1.151689 print
// value and address

#include <stdio.h>

int main()
{
    int age = 45;
    printf("Value of int variable is %d\n", age);

    printf("Address of int variable is %d\n", &age);

    char alphabet = 'p';
    printf("Value of char variable is %c\n", alphabet);

    printf("Address of char variable is %d\n", &alphabet);
    return 0;
}

