//Program to check whether the accepted number is a palindrome or not 
#include<stdio.h>
#include<math.h>

int main()
{
	int n , count=0;
	int reverse = 0;
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
	//Reversing the number
	while(i>0)
	{
		int last = i%10;
		reverse =  reverse + last* pow(10,count-1);
		count--;
		i=i/10;
	}
	
	(reverse == n)? printf("It is a Palindrome number."): printf("It is not a Palindrome number.");
	
	return 0;
}
