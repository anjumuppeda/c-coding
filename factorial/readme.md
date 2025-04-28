#factorial  
the  product of all positive integers   
its start with 1  
     factorial.c is a source code file  
  ```c
  #include <stdio.h>

int main() {
    int n, fact = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}    
```
 its multiplying the  number is become 0  
 its print result     


    example   
    5=5*4*3*2*1=120  


      this is a factorial program in c program    
           