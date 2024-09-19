#include<stdio.h>
int main()
{
	float actualamount;
	float savedamount;
	float amountafter;
	
	printf("enter the cost");
	scanf("%2f", &actualamount);
	
	if (actualamount>=500)
	{
		if(actualamount<2000)
		{
		savedamount= 5/100 * actualamount;
		}
		
		if(actualamount>=2000 && actualamount<=4000)
		{
		savedamount= 10/100 * actualamount;
	    }
	    
	    if(actualamount>=4000 && actualamount<=6000)
		{
		savedamount= 20/100 * actualamount;
	    }
	    
	    if(actualamount>6000)
		{
		savedamount= 35/100 * actualamount;
		}
	
	}
	
	else
	{
	printf("not eligible for discount");
	}
	
	
	printf("the actual amount is: %2f", actualamount);
	printf("amount saved is: %2f", savedamount);
	
	amountafter = actualamount - savedamount;
	printf("the amount after discount is: %2f", amountafter);
	
   return 0;
	
}
