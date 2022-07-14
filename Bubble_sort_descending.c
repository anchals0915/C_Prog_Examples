//Sort the given set of n numbers using bubble sort technique
//Descending order

#include<stdio.h>
int main()
{
	int n;	///declaration of a variable
	
	//accept a size
	printf("Enter a size of an array :");
	scanf("%d", &n);
	
	//declaring an array 
	int marks[n];
	
	//asking for input 
	printf("Enter elements in an array:");
	for(int i=0; i<n; i++)
	{
		scanf("%d" ,&marks[i]);
	}
	
	//sorting array in descending order
	for(int i=0; i<n-1 ; i++)
	{
		for(int j=0; j<n-1-i ; j++)
		{
			if(marks[j] < marks[j+1])
			{
				int temp = marks[j];
				marks[j] = marks[j+1];
				marks[j+1] = temp;
			}
		}
	
	}
	
	//printing array
	printf("Sorted array in Descending order:");
	for(int i =0; i<n; i++)
	{
		printf("%d ", marks[i]);
	}

	return 0;
}


