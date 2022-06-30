//Armstrong number 
#include<stdio.h>
#include<math.h>
int main()
{
	int n , count=0;
	int sum=0;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	
	//counting number of digits 
	int i=n;
	while(i>0)
	{
		count++;
		i = i/10;
	}

	i=n;
	while(i>0)
	{
		int last = i%10;
		sum = sum + pow(last,count);
		i = i/10;
	}

	if(sum == n )
	{
		printf("\nIt is a Armstrong number.");
	}
	else
	{
		printf("\nIt is not a Armstrong number.");
	}
	
	
	
	return 0;
}
