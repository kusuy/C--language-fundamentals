// WAP to check in which quadrant the point lies or origin
// Input = 2, condition = 5 (if elseif*3 else)

#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter value of x");
    scanf("%d", &x);

    printf("Enter the value of y");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("Point lies in 1st quadrant and value of x = %d, y = %d\n", x, y);
    }
    else if (x < y && y > 0)
    {
        printf("point lies in 2nd quardent amd value of x = %d, y =%d\n", x, y);
    }
    else if (x < y && x < y)
    {
        printf("point lies in 3rd quardent and values of x = %d,y =%d\n", x, y);
    }
    else if (x > y && x < y)
    {
        printf("point ;ies in 4th quardent and values of x = %d,y =%d\n", x, y);
    }
    else
    {
        printf("point lies at origin\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("Point lies in 1st quadrant and value of x = %d, y = %d\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("Point lies in 2nd quadrant and value of x = %d, y = %d\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("Point lies in 3rd quadrant and value of x = %d, y = %d\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("Point lies in 4th quadrant and value of x = %d, y = %d\n", x, y);
    }
    else
    {
        printf("Point lies at origin.\n");
    }
}
