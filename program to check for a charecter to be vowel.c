#include<stdio.h>  // Standard input-output header
#include<conio.h>  // Console input-output header (optional for modern compilers)

int main()
{
    int x = 0;  // Variable to keep track of whether the input is a vowel
    char vowels[13] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};  // Array to store vowel characters
    char input;  // Variable to store user input
    printf("Enter any letter to check for vowel: ");  // Prompt the user for input
    scanf("%c", &input);  // Read the character input from the user and store it in 'input'

    // Loop through the vowels array to check if the input character is a vowel
    for(int i = 0; i < 12; i++)
    {
        if(vowels[i] == input)  // If the current vowel matches the input
        {
            printf("'%c' is a vowel", input);  // Output message indicating it is a vowel
            x++;  // Increment x to indicate a vowel has been found
        }
    }

    // If no vowels were found, it is a consonant
    if(x == 0)
    {
        printf("'%c' is a consonant", input);  // Output message indicating it is a consonant
    }

    return 0;  // Indicate successful program termination
}
