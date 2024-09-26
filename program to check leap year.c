#include<stdio.h>
#include<conio.h>

int main()
{
    int year;  // Variable to store user input for the year
    printf("Enter year to check for leap year: ");  // Prompt the user for input
    scanf("%d", &year);  // Read the integer input from the user and store it in 'year'

    // Check if the year is a leap year using correct leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);  // Output message indicating it is a leap year
    }
    else
    {
        printf("%d is not a leap year", year);  // Output message indicating it is not a leap year
    }

    return 0;  // Indicate successful program termination
}
