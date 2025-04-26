#fibonacci sequence  
it is a series of number  
it is each number the sum of two preceding ones  
its start from 0 and 1  
each next number is found adding two number  
  
  #include <stdio.h>
int main()
 {
    int n, a = 0, b = 1, next, i;
    printf("Enter the number ");
    scanf("%d", &n);
    printf("Fibonacci sequence:\n");
    for (i = 0; i < n; i++) 
    {
        if (i <= 1)
            next = i;
        else
         {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    return 0;
} 
n is the number to print 
a and b are the first two fibonacci number  
next is a stores the next number in sequence  
i is a for loop   

  this is a fibonacci sequence  
   


