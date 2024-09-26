#include<stdio.h>
#include<conio.h>

void armstrong(int num);

int main()
{
	int start , stop;
	printf("Enter Uper Bound: ");
	scanf("%d", &stop);
	printf("Enter Lower Bound:");
	scanf("%d", &start);
	
	for(int i = start ; i<=stop ; i++ )
	{
		armstrong(i);
	}
	return 0;
}

void armstrong(int num)
{
	int digits = 0 , copy1 = num , copy2 = num, armstrong = 0;
	
	while(copy1 != 0)
	{
		digits++;
		copy1 = copy1/10;
	}
	
	for(int i = 0 ; i < digits ; i++)
	{
		int sum_of_digits = 1;
		for(int j = 0 ; j < digits ; j++)
		{
			sum_of_digits = sum_of_digits * (copy2%10);
		}
		armstrong = armstrong + sum_of_digits;
		copy2 = copy2/10;
	}
	if(armstrong == num)
	{
		printf("\n%d", num);
	}
}
