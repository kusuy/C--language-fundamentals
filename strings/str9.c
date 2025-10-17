
// String compare
#include <string.h>
#include <stdio.h>

int main()
{
    char str1[] = "SPRK";
    char str2[] = "tech";
    char str3[] = "SPRK";

    printf("String compare str1 wrt str2 -> %d\n", strcmp(str1, str2));
    printf("String compare str2 wrt str1 -> %d\n", strcmp(str2, str1));
    printf("String compare str1 wrt str3 -> %d\n", strcmp(str1, str3));
}