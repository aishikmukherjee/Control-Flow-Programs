#include<stdio.h>
#include<conio.h>

void prime(int num);

int main()
{
	int start , stop;
	printf("Enter the uper bound: ");
	scanf("%d",&stop);
	printf("Enter the lower bound: ");
	scanf("%d", &start);
	
	
	for(int i = start ; i <=stop ;  i++)
	{
		if(i<=0 || i==1)
		{
		}
		else
		{
			prime(i);
		}
	}
	return 0;
}

void prime(int num)
{
	int flag = 0;
	for(int i = 1 ; i<=num/2 ; i++)
	{
		if(num%i==0)
		{
			flag++;
		}
	}
	if(flag == 1){
		printf("\n%d", num);
	}
}
