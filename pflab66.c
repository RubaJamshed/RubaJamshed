#include <stdio.h>
int main()
 {
    int n1 = 1, n2 = 2, next, i;
    printf("%d", n1);
    printf("\n%d", n2);
    for(i = 3; i <=9; i++)
    {
        next = n1 * n2; 
        printf("\n%d", next);
        n1 = n2; 
        n2 = next;
    }
    
    return 0;
}