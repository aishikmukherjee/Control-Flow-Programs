#include<stdio.h>
#include<conio.h>

int main()
{
    int N, sum;  // Declare variables to store N and the sum
    printf("Enter N to find the sum of natural numbers up to N: ");
    scanf("%d", &N);  // Take input from the user

    // Calculate the sum using the formula: Sum = N * (N + 1) / 2
    sum = (N * (N + 1)) / 2;

    // Print the result
    printf("Sum of first %d natural numbers = %d", N, sum);

    return 0;  // Indicate successful program termination
}
