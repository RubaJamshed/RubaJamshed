
#include <stdio.h>
int main()
{

 
    int N;
    int arr[N];
    int found = 0;
    int i;
    int index;
    
    for (i= 0; i<N; i++)
    {
        printf("enter the numbers");
        scanf("%d",&arr[i]);
    }
   
    for (int i = 0; i < N; i++) 
    {
        index = arr[i] % N;
        arr[index] += N;
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] / N > 1) 
        {
            printf("Numbers occurring more than once: %d ", i);
            found = 1;
        }
        else
        {
            printf("no repeating words");
        }
    }
  return 0;
}