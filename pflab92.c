#include<stdio.h>
int swapIntegers(int a, int b);
int main()
{
	int a,b;
	
	printf("enter the value 1: ");
	scanf("%d", &a);
	printf("enter the value 2: ");
	scanf("%d", &b);
	
	
	swapIntegers(a,b);
	printf("the updated values are: \n value 1: %d \n value 2: %d" ,a , b);
	
return 0;

}

int swapIntegers(int a,int b)
{
	int swap;
	
	swap = b;
	b = a;
	a = swap;
}

