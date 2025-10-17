
// String functions
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello Hii";
    printf("Length of string: %d\n", strlen(str));

    printf("String = %s\n", str);
    printf("Upper case = %s\n", strupr(str));
    printf("String = %s\n", str);
    printf("Lower case = %s\n", strlwr(str));
    printf("String = %s\n", str);
}
