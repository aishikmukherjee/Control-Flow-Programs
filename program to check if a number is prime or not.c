#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int num, flag = 0;  // Initialize variables for user input and a flag to count divisors
    printf("Enter any number to check if it's prime or not: ");  // Prompt the user for input
    scanf("%d", &num);  // Read the integer input from the user and store it in 'num'

    // Check if the number is 1, which is not a prime number
    if(num == 1)
    {
        printf("1 is not a prime number.");  // Output message for number 1
        return 0;  // Terminate the program
    }
    // Check if the input number is less than or equal to 0
    else if(num <= 0)
    {
        printf("Wrong Input");  // Output message for invalid input
        return 0;  // Terminate the program
    }

    // Loop to check how many divisors the number has
    for(int i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)  // If 'i' is a divisor of 'num'
        {
            flag++;  // Increment the divisor count
        }
    }

    // A prime number should have exactly one divisor (1 itself)
    if(flag == 1)
    {
        printf("%d is a prime number", num);  // Output message if the number is prime
    }
    else
    {
        printf("%d is not a prime number", num);  // Output message if the number is not prime
    }

    return 0;  // Indicate successful program termination
}
