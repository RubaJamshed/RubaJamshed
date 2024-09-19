#include<stdio.h>
int main()
{
	int num1;
	int num2;
	char operate;
	int result;
	
	printf("enter num1");
	scanf("%d", &num1);
	printf("enter num2 ");
	scanf("%d", &num2);
	printf("enter operator ");
	scanf(" %c", &operate);
	
	switch(operate)
	{ 
	case '+' :
	result = num1 + num2 ;
	printf("result is: %d", result);
	break;
	
	case'-' :
	result = num1 - num2 ;
	printf("result is: %d", result);
	break;
	
	case'*' :
	result = num1 * num2 ;
	printf("result is: %d", result);
	break;
	
	case'/' :
	result = num1 / num2 ;
	printf("result is: %d", result);
	break;
	
	default:
	printf("invalid number");
		
	}
	
}

