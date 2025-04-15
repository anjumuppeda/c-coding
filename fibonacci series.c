#include <stdio.h>
int main()
 {

  int i, n;
  int b1= 0, b2= 1;
  int nextnumber= b1 + b2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d\n %d\n ", b1,b2);
  for (i = 3; i <= n; i++)
   {
    printf("%d\n ", nextnumber);
    b1= b2;
    b2= nextnumber;
    nextnumber = b1+ b2;
  }

  return 0;
}