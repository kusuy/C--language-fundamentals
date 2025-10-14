/* binary operator
aritmatic operator -> + (Addition)
                    - (subtraction)
                    * (multiply)
                    / (divivde)
                    % (modules)
                    */

#include <stdio.h>
int main()
{
    // variable initallization
    int a = 23;
    int b = 4;
    //  empty = variable declaration
    int result;

    result = a * b;
    printf("%d * %d = %d\n", a, b, result);

    // 23 / 4 division of a/b

    result = a / b;
    printf("division of %d/%d = %d\n", a, b, result);

    // 23 % 4 remainder of a % b
    result = a % b;
    printf("remainer of %d,%d = %d\n", a, b, result);

    // 23+4 addition o f a+b
    result = a + b;
    printf("Addition of %d,%d = %d\n", a, b, result);

    // 23-4 subtraction of a-b
    result = a - b;
    printf("subtraction of %d,%d = %d\n", a, b, result);
}
