//Program to compute cos(x) using taylor series
#include<stdio.h>
#include<math.h>
 
#define PI 3.142857143
 
int main()
{
	//declaration of variable
	float degree,x,num,deno,term,sum;
	int i;
	
	//asking for input
	printf("cos(x): ");
	printf("Enter Degree (x) : ");
	scanf("%f", &degree);
	
	//converting degree into radian
	x = (PI/180) * degree ;
	

	
	
	
	return 0;
}
