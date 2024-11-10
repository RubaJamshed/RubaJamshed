#include<stdio.h>
int swapIntegers(int a, int b);
int main()
{
	int a,b,c;
	
	printf("enter the value 1: ");
	scanf("%d", &a);
	printf("enter the value 2: ");
	scanf("%d", &b);
	
	
	c = swapIntegers(a,b);
return 0;

}

int swapIntegers(int a,int b)
{
	int swap,c;
	
	swap = b;
	b = a;
	a = swap;
	c = printf("the updated values are: \n value 1: %d \n value 2: %d" ,a , b);
	return c;
}

