#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 5;  // factorial of 5
    int sum = 1;  // sum initialized to 1 for multiplication

    // Loop to calculate the factorial
    for(int i = num; i >= 1; i--)
    {
        sum = sum * i;
    }

    // Print the result
    printf("Factorial of %d = %d", num, sum);
    return 0;
}
