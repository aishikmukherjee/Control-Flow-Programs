#include<stdio.h>
#include<conio.h>

int main()
{
    int num1 = 12, num2 = 15, num3 = 20;  // Declare and initialize three numbers

    // Check if num1 is the largest
    if(num1 > num2 && num1 > num3)
    {
        printf("%d is the largest among %d, %d, and %d", num1, num1, num2, num3);
    }
    // Check if num2 is the largest
    else if(num2 > num1 && num2 > num3)
    {
        printf("%d is the largest among %d, %d, and %d", num2, num1, num2, num3);
    }
    // If the above conditions fail, num3 must be the largest
    else
    {
        printf("%d is the largest among %d, %d, and %d", num3, num1, num2, num3);
    }

    return 0;  // Indicate successful program termination
}
