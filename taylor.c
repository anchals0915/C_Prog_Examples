//Program to compute sin(x) using taylor series
#include<stdio.h>
#include<math.h>
 
#define PI 3.142857143
 
int main()
{
	//declaration of variable
	float degree,x,num,deno,term,sum;
	int i;
	
	//asking for input
	printf("\nsin(x): ");
	printf("\nEnter Degree (x) : ");
	scanf("%f", &degree);
	
	//converting degree into radian
	x = (PI/180) * degree ;
	
	num = x;
	deno = 1;
	i = 1;
	sum = 0;
	 
	do
	{
		term = num/deno ;
		sum = sum + term;
		num = -num * x * x ;
		i = i + 2;
		deno = i * (i-1) * deno;
		
	}while(fabs(term) >= 0.0000001);
	
	printf("\nComputed value of sin(%.2f) = %f" , degree , sum);
	printf("\nValue obtained from built in function : sin(%.2f) = %f", degree , sin(x));
	
	return 0;
}
