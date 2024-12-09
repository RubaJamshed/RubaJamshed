1)


#include <stdio.h>

int sumOfDigits(int num) 
{
    if (num == 0) 
    {
        return 0; 
    }
    return (num % 10) + sumOfDigits(num / 10); 
}

int main() 
{
    int num = 123;
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}

2)



#include <stdio.h>
#include <string.h>


void reverseStringHelper(char str[], int start, int end) 
{
    if (start >= end) 
    {
        return; 
    }
    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    
    reverseStringHelper(str, start + 1, end - 1);
}


void reverseString(char str[]) 
{
    int length = strlen(str);
    reverseStringHelper(str, 0, length - 1);
}

int main() 
{
    char str[] = "hello";
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}