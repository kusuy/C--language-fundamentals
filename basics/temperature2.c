// Convert degree celcius to Farenheit take input
//
// formula is F = (C * (9 / 5)) + 32

#include <stdio.h>
int main()
{
    int celcius;
    printf("Temperature in celcius");
    scanf("%d", celcius);
    float farenheit = celcius * 9 / 5 + 32;
    printf("temperature  %d celcius in farenheit = %f.1\n", celcius, farenheit);
    return 0;
}
