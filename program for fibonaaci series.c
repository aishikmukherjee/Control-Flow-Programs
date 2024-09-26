#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    // Initialize the first two Fibonacci numbers
    int num = 21, num1 = 0, num2 = 1, num3;
    printf("0");  // Print the first Fibonacci number
    printf("\n1");  // Print the second Fibonacci number

    // Loop to generate the Fibonacci sequence up to the 21st number
    for (int i = 2; i < num; i++) {  // Change the loop condition to < num for clarity
        num3 = num1 + num2;  // Calculate the next Fibonacci number
        printf("\n%d", num3);  // Print the next Fibonacci number
        num1 = num2;  // Update num1 to the previous num2
        num2 = num3;  // Update num2 to the current Fibonacci number
    }

    return 0;  // Indicate successful program termination
}
