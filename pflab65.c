#include<stdio.h>
int main()
{
    int num = 65536;
	int div_by;
	 
	for (div_by=1 ; div_by<=9 ; div_by++)
	{
	  num = num/div_by;
	  printf("the number is : %d\n", num);
	}

  return 0;
	  
}
