//Q1. C program to swap two variables using pointers:
#include<stdio.h>

void swap(int *x,int *y){
      int temp;
      temp = *x;
      *x = *y;
      *y = temp;
}

int main(){
      int num1,num2;
      printf("Enter num1:");
      scanf("%d", &num1);

      printf("Enter num2:");
      scanf("%d", &num2);

      printf("Before getting swapped: num1=%d, num2=%d\n", num1, num2);

      swap(&num1,&num2);

      printf("After getting swapped: num1=%d, num2=%d\n", num1, num2);
 
return 0;
}