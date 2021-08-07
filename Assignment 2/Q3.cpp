#include <stdio.h>

int main(){
  int a, b, c, d, e, avg;
printf("\nEnter the 1st number: ");
scanf("%d", &a);
printf("\nEnter the 2nd number: ");
scanf("%d", &b); 
printf("\nEnter the 3rd number: ");
scanf("%d", &c);
printf("\nEnter the 4th number: ");
scanf("%d", &d);
printf("\nEnter the 5th number: ");
scanf("%d", &e);
avg = (a + b + c + d + e)/5;

printf("The average is = %d", avg);

    return 0;
}