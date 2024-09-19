#include<stdio.h>
void main()
{
	int num;
	int remainder;
	
	printf("enter number");
	scanf("%d",&num);
	
	remainder=num%3;
	
	if (remainder==0)
	{ 
	printf("the number is multiple of 3");
	}
	
	else
	{ 
	printf("the number is not a multiple of 3");
	}
	  
}
