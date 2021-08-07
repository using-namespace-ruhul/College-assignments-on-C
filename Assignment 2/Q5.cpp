#include <stdio.h>

int main(){
  int age;
  printf("Enter the age : ");
  scanf("%d", &age);

  printf("Three immediate integrals of %d are %d to %d , %d to %d  and %d to %d", age, age-1, age+1, age-2, age+2, age-3, age+3);


    return 0;
}