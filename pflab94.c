#include<stdio.h>

int arthoperation(int a, int b, int opchoice);

int main()
{
	int a,b,c,opchoice;
	
	printf("enter the value 1: ");
	scanf("%d", &a);
	printf("enter the value 2: ");
	scanf("%d", &b);
	printf("enter the operation choice: ");
	scanf("%d", &opchoice);
	
    arthoperation(a ,  b, opchoice);
}


int arthoperation(int a , int b, int opchoice)
{
	if(opchoice==1)
	{
		int add = a+b;
		printf("the addition is: %d", add);
		
	}
	
	else if(opchoice==2)
	{
		int sub = a-b;
		printf("the subtraction is: %d" , sub);
		
	}
	
	else if(opchoice==3)
	{
		int pro = a*b;
		printf("the multiplication is: %d" , pro);
		
    } 
	
	else if(opchoice==4)
	{
		int div = a/b;
		printf("the division is: %d" , div);
		
	}
	
	else
	{
		printf("Invalid choice.Enter again");
		
	}
}





