#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int choice;  // Variable to store the user's choice of operation
    float num1, num2;  // Variables to store the operands

    // Prompt for the first operand
    printf("\nEnter 1st Operand: ");
    scanf("%f", &num1);  // Read the first operand

    // Prompt for the second operand
    printf("\nEnter 2nd Operand: ");
    scanf("%f", &num2);  // Read the second operand

    // Display the menu of operations
    printf("\nEnter 1 to add\n");
    printf("Enter 2 to subtract\n");
    printf("Enter 3 to multiply\n");
    printf("Enter 4 to divide\n");

    // Prompt for the choice of operation
    printf("\nEnter Choice: ");
    scanf("%d", &choice);  // Read the user's choice

    // Display the result based on the user's choice
    printf("\n============================= Result =============================");
    switch (choice) {
        case 1:  // Addition
            printf("\n%.3f + %.3f = %.3f", num1, num2, (num1 + num2));
            break;
        case 2:  // Subtraction
            printf("\n%.3f - %.3f = %.3f", num1, num2, (num1 - num2));
            break;
        case 3:  // Multiplication
            printf("\n%.3f * %.3f = %.3f", num1, num2, (num1 * num2));
            break;
        case 4:  // Division
            // Check if the second operand is zero to avoid division by zero error
            if (num2 != 0) {
                printf("\n%.3f / %.3f = %.3f", num1, num2, (num1 / num2));
            }
            else {
                printf("\nError: Division by zero is not allowed.");
            }
            break;
        default:  // Handle invalid choices
            printf("\nInvalid choice. Please enter a number between 1 and 4.");
            break;
    }

    return 0;  // Indicate successful program termination
}
