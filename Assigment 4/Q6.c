#include <stdio.h> 

int main() {
  int n, i, c = 0;
  printf("Enter any number :");
  scanf("%d", &n);


   for (i = 1; i <= n/2; i++) 
   {
      if (n % i == 0) 
      {
         c++ ;
      }
  }

  if (c == 1) 
  {
  printf("%d is a Prime number\n", n);
  }
  else 
  {
  printf("%d is not a Prime number\n", n);
  }

  return 0;    
}