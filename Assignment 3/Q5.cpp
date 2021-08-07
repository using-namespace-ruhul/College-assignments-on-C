#include<stdio.h>

int main(){
 int year;
 printf("Enter the year: ");
 scanf("%d", &year);

  (year%4==0 && year%100!=0) ? (printf("LEAP YEAR\n")) : ((year%400 ==0 ) ? (printf("LEAP YEAR\n")) : (printf("COMMON YEAR\n")));


    return 0;
}