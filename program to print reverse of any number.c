#include<stdio.h>
#include<conio.h>

int main()
{
    int num;  // Variable to store the input number
    printf("Enter any number to print its reverse: ");
    scanf("%d", &num);  // Read the input number

    // Check if the number is negative
    if(num < 0) {
        printf("-");  // Print the negative sign
        num = -num;  // Make the number positive for reversal
    }

    // Loop to print the digits of the number in reverse order
    while(num != 0)
    {
        printf("%d", num % 10);  // Print the last digit
        num = num / 10;  // Remove the last digit
    }

    printf("\n");  // New line for better output formatting
    return 0;  // Indicate successful program termination
}
