//Q3. Write a C function to find the largest of three 
//numbers using pass by reference. 
//The function to find the largest should return a pointer.
#include<stdio.h>

int *largest(int *a, int *b, int *c){
      static int x;
      x = (*a>*b? (*a>*c?*a:*c):(*b>*c?*b:*c));
return &x;
}

int main(){
   int a,b,c;
  printf("Enter 3 numbers:\n");
  scanf("%d %d %d", &a, &b ,&c);
  printf("The largest number is %d\n", *largest(&a,&b,&c));
 
return 0;
}