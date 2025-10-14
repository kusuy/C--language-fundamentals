// WAP to check whether the number is a prime number or not
// Prime number only divisible by 1 and by own number
// count = 2 -> exactly 2 means that number is a prime number

#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number");
    scanf("%d", &n);
    // Assuming whatever input n is prime number

    int prime = 0; // true
    int i;

    for (i = 2; i < n; i++)
    {
        // is n divisible by i ?
        if (n % i == 0)
        {
            // means number is not prime number
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}
