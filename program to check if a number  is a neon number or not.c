#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

// Function to check if a number is a neon number
int isNeonNumber(int num) {
    int power = num * num;  // Calculate the square of the number
    int sum = 0;

    // Sum the digits of the squared number
    while (power != 0) {
        sum += power % 10;  // Add the last digit to sum
        power /= 10;  // Remove the last digit
    }

    return sum == num;  // Return whether the sum of digits equals the original number
}

int main() {
    int num;  // Variable to store the input number
    printf("Enter any number to check if it's a neon number: ");  // Prompt for input
    scanf("%d", &num);  // Read the integer input from the user

    // Check if the number is a neon number and output the result
    if (isNeonNumber(num)) {
        printf("%d is a neon number", num);  // Output message indicating it is a neon number
    } else {
        printf("%d is not a neon number", num);  // Output message indicating it is not a neon number
    }

    return 0;  // Indicate successful program termination
}
