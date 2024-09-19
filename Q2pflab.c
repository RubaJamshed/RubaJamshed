#include <stdio.h>
int main()
{
    int a;
    int b;
    int swap;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf(" \n Enter num2:");
    scanf("%d", &b);
    
    swap=a;
    a=b;
    b=swap;
    
    printf("\n Num1: %d", a);
    printf("\n Num2: %d" , b);
    

    return 0;
}