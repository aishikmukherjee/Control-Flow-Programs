#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("Enter any natural number to display it's  factors: ");
	scanf("%d", &num);
	
	printf("\nThe factor of %d are: ", num);
	for(int i = 1 ; i<=num ; i++)
	{
		if(num%i == 0)
		{
			printf("\n%d", i);
		}
	}
	printf("\n%d",num);
	return 0;
}
