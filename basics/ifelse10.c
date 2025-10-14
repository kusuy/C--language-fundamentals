/*
2. WAP to accept character and display value based on criteria
    a. if chracter contains alphabets A-Z or a-z -> It is a character
    b. if chracter contains alphabets 0-9 -> It is a digit
    c. if character doesnot container alphabet or number -> It is a special symbol*/
// Input = 1, COnditions = 3 (if elseif else)

#include <stdio.h>
int main()
{
    char alphabet;

    printf("Enter a character: ");
    scanf("%c", &alphabet);

    if ((alphabet >= 'A' && alphabet <= 'Z') || (alphabet >= 'a' && alphabet <= 'z'))
    {
        printf("a[phabet = %c is character\n", alphabet);
    }
    else if (alphabet >= '0' && alphabet <= '9')
    {
        printf("aphabet = %c is digit\n", alphabet);
    }
    else
    {
        printf("alphabet = %c is a special symbol\n", alphabet);
    }
    return 0;
}
