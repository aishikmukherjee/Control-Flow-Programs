#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int num;  // Variable to store the user input number
    printf("Enter number to check for palindrome: ");  // Prompt the user for input
    scanf("%d", &num);  // Read the integer input from the user and store it in 'num'

    // Create copies of the original number for processing
    int copy1 = num, copy2 = num, reverse = 0, number_of_digits = 0;

    // Count the number of digits in the original number
    while(copy1 != 0)
    {
        number_of_digits++;  // Increment the digit count
        copy1 = copy1 / 10;  // Remove the last digit from copy1
    }

    // Reverse the original number
    while(number_of_digits != 0)
    {
        reverse = (reverse + (copy2 % 10));  // Add the last digit of copy2 to reverse
        if(number_of_digits != 1)  // If there are still digits left to process
        {
            reverse = reverse * 10;  // Shift reverse to the left by one digit
        }
        copy2 = copy2 / 10;  // Remove the last digit from copy2
        number_of_digits--;  // Decrement the digit count
    }

    // Check if the original number is equal to its reverse
    if(num == reverse)
    {
        printf("%d is a Palindrome number.", num);  // Print if the number is a palindrome
    }
    else
    {
        printf("%d is NOT a Palindrome number.", num);  // Print if the number is not a palindrome
    }

    return 0;  // Indicate successful program termination
}
