#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int num;  // Variable to store the number to check
    printf("Enter any number to check if it's an armstrong number: ");
    scanf("%d", &num);  // Read the input number

    int number_of_digits = 0, copy1 = num, copy2 = num, armstrong = 0;

    // Count the number of digits in the number
    while(copy1 != 0) {
        number_of_digits++;
        copy1 = copy1 / 10;  // Remove the last digit
    }

    // Calculate the sum of the cubes of the digits
    for(int i = 0; i < number_of_digits; i++) {
        int temp = copy2 % 10;  // Get the last digit
        int sum = 1;  // Initialize sum for the power calculation

        // Calculate temp raised to the power of number_of_digits
        for(int j = 1; j <= number_of_digits; j++) {
            sum = sum * temp;  // Multiply temp to itself
        }

        armstrong = armstrong + sum;  // Add to the Armstrong sum
        copy2 = copy2 / 10;  // Remove the last digit
    }

    // Check if the calculated armstrong sum is equal to the original number
    if(armstrong == num) {
        printf("\n%d is an Armstrong number", num);  // Correct output statement
    } else {
        printf("\n%d is not an Armstrong number", num);  // Correct output statement
    }

    return 0;  // Indicate successful program termination
}
