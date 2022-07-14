//Sort the given set of n numbers using bubble sort technique
//and search the given element by Binary search
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
	
	//sorting array
	for(int i=0; i<n-1 ; i++)
	{
		for(int j=0; j<n-1-i ; j++)
		{
			if(marks[j] > marks[j+1])
			{
				int temp = marks[j];
				marks[j] = marks[j+1];
				marks[j+1] = temp;
			}//end of if
		}//end of inner for
	} //end of outer for
	
	//printing array
	printf("Sorted array :");
	for(int i =0; i<n; i++)
	{
		printf("%d ", marks[i]);
	}
	
	int key;
	printf("\nEnter the element to be found: ");
	scanf("%d" , &key);
	
	//Binary Search method 
	int first =0;
	int last = n-1;
	
	while(first<=last)
	{
		int mid=(first + last)/2;
		
		if(marks[mid] == key) //comparing with middle index element
		{
			printf("\nElement Found");
			printf("\n%d is found at location %d \n", key, mid+1);
			return 0;
		}
		
		else if(marks[mid] > key)
		{
			first = mid+1; 
		}
		
		else  //value of marks[mid]<key
		{
			last = mid-1 ;
		}
		
	}//end of while loop
		
		
		printf("\n%d is not found\n", key);
	
	return 1;
}



