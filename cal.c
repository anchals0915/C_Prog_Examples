//Program to Stimulate a simple calcualtor
#include<stdio.h>
int main()
{
	int num1,num2,res;	//declaration of the variable 
	char op;
	printf("\nEnter an arithmetic operator:");
	scanf("%c",&op);
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1 , &num2);
	
	
	if(op=='+')
	{
		res = num1+ num2 ;
	}

	else if (op=='-')
	{
		res = num1 - num2;
	}
	
	//multiply operator
	else if (op=='*')
	{
		res = num1 * num2;
	}
	
	//divide operator
	else if (op=='/')
	{									//nested if statement
		if(num2==0)
		{
			printf("Divide by Zero Error. \n");
			return 1;
		}
		else
		{
			res = num1 / num2;
		}
	}
	
	//modulus operator
	else if (op=='%')
	{											//nested if statement
		if(num2==0)//checking condition for divide by 0
		{
			printf("Divide by Zero Error. \n");
			return 2;
		}
		else
		{
			res = num1 % num2;
		}
	}
	
	
	else
	{
		printf("\nWrong operator........\n");		//printing statement
	}
	
	
	printf("\n %d %c %d = %d\n",num1,op,num2,res);		//printing staement
	
	
	
	return 0;
}

