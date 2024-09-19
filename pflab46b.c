   
#include <stdio.h>

int main()
 {
    int n;
    
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    
    if (n > 9) 
    {
        printf("greater than 9\n");
    } 
    else if (n<9)
    {
        printf("less than  9\n");
    }
    else if (n==9)
    {
        printf("equal to 9\n");
    }
    else
    {
        printf("invalid input");
    }
    
    return 0;
}