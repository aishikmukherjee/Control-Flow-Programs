#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int number = 100;  // Variable to store the number to check

    // Check if the number is positive
    if(number > 0) {
        printf("%d is a positive number", number);
    }
    // Check if the number is zero
    else if(number == 0) {
        printf("%d is Zero", number);
    }
    // If the number is neither positive nor zero, it must be negative
    else {
        printf("%d is a negative number", number);
    }

    return 0;  // Indicate successful program termination
}
