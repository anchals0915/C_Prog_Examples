//Quadratic equation
#include<stdio.h>
#include<math.h>

void main()
{
	//declartion of variable
	float a,b,c;	//a,b,c for coefficients
	float d;	//for D
	float r1,r2;	//for roots 
	float rpart, ipart;
	
	printf("Enter the coefficient : ");
	scanf("%f %f %f" ,&a, &b ,&c);

	d= pow(b,2) - 4*a*c;	//discrement
	 
	//if else ladder
	if(a!=0)
	{
		if(d==0)	//Discrement is equal to zero
		{
			r2 = r1 = (-b)/(2*a);
			printf("\nRoots are Real and Equal. \n");
			printf("Roots of Quadratic Equation is %f and %f " , r1 , r2  );
		}
		
		if(d>0)		//discrement is greater than zero 
		{
			r1 = (-b+(sqrt(d))) / (2*a) ;	
			r2 = (-b-(sqrt(d))) / (2*a) ;
			printf("\nRoots are Distinct and real. \n");
			printf("Roots of Quadratic Equation is %f and %f " , r1 , r2  );
		}
		
		if(d<0)		//discrement is lesser than zero 
		{
			rpart = -(b/(2*a)) ;
			ipart = sqrt(d)/(2*a);
			printf("\nRoots are imaginary.\n");
			printf("Real part Quadratic Equation is %f\n" , rpart);
			printf("Imaginary part Quadratic Equation is %f\n" , ipart);
		}
	}
	
	else
	{
		printf("\n Does not respresent Qudratic Equation.\n");
	}
	
}//end of main function 
