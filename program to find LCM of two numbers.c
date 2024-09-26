#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, max;

    // Input two numbers
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    // Determine the larger number to start checking for LCM
    max = (num1 > num2) ? num1 : num2;

    // Loop to find the LCM
    while(1)
    {
        // If max is divisible by both num1 and num2, it is the LCM
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;  // Exit the loop once LCM is found
        }
        else
        {
            max++;  // Increment max and check again
        }
    }

    return 0;  // Indicate successful program termination
}
