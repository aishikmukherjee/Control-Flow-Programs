#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int num = 10;  // Initialize an integer variable num with a value of 10

    // Check if num is even or odd
    if (num % 2 == 0)  // If the remainder when num is divided by 2 is 0
    {
        // If num is even, print the corresponding message
        printf("%d is even", num);
    }
    else
    {
        // If num is odd, print the corresponding message
        printf("%d is odd", num);
    }

    return 0;  // Indicate successful program termination
}
