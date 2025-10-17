// String functions
#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[] = "SPRK";
    char last_name[] = "TECH";

    printf("Before concat:\n");
    printf("First name = %s\n", first_name);
    printf("Last name = %s\n", last_name);
    strcat(first_name, last_name);
    printf("After concat:\n");
    printf("First name = %s\n", first_name);
    printf("Last name = %s\n", last_name);
}