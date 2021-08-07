#include<stdio.h>

int fibo(int n)
{
   if (n <= 1)
      return n;
   return fibo(n-1) + fibo(n-2);
}
 
int main (){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    int fib = fibo(i);
    printf("%d \n", fib);
    }
    
  	
  return 0;
}