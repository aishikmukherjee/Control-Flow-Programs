#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 7;  // Multiplication table for 7
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d X %d = %d", num, i, (i * num));  // Print each line of the multiplication table
    }
    return 0;
}
