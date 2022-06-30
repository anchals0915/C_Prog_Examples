//Electricity board charges
#include<stdio.h>

void main()
{
	//declaration of variable
	int units;
	float charges, total ;
   
	char name[20];
	
	//asking for input 
	printf("\nEnter your name: ");
	scanf("%s",name);   
	
	//enter the number of unit consumed
	printf("\nEnter Number of units consumed : ");
	scanf("c%d", &units );
	
	if (units>=0)
	{
		if(units <=200)	//first 200 units 
		{
			charges = units*0.8;
		}
	
		if(units>200 && units<=300)	//for next 100 units 
		{
			charges = (200*0.80) + ( (units-200)*0.90 );
		}
	
		if(units>300)	//beyond 300 units
		{
			charges = (200*0.80) + (100*0.90) + ( (units-300)*1 ) ;
		}
		
		//total charge
		total = charges + 100;		
		
		if(total >400)
			total = (total + 0.15*total) ;
	
		printf("\nName of user: %s ", name);
		printf("\nNo. of units consumed : %d units" , units);
		printf("\nCharge = %f Rupees" , charges);
		printf("\nTotal Charge = %f Rupees\n", total);
	}

	else
	{
		printf("\nWorng input\n");
	}
	
}//end of main function
