
/*
Functions: Block of code which we can reuse again and again
1. Without Return Type Without Parameters
void fn_name(parameters/empty)
2. Without Return Type With Parameters
3. With Return Type Without Parameters
4. With Return Type With Parameters
*/

#include <stdio.h>
// Function Definition
void sayHello()
{
    printf("Function sayHello() is called\n");
    printf("Hello\nHello\n");
}

int main()
{

    // CALL
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
}

// create a function without parameters
// this function will take 2 inputs display addition of 2 numbers
