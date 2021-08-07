#include<stdio.h>

int main(){
  int a, b;
printf("Enter the value of a : ");
scanf("%d", &a);
printf("\nEnter the value of b : ");
scanf("%d", &b);
a = a ^ b;
b = a ^ b;
a = a ^ b;

printf("\n\nThe swapped value of a is %d", a);
printf("\n\nThe swapped value of a is %d", b);

    return 0;
}