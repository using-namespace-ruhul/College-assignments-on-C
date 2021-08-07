#include <stdio.h>

#define PI 3.14

int main(){
  float  area, circumference;
  int r;
  printf("Enter the value of radius: ");
  scanf("%d", &r);
  circumference = 2 * PI * r;
  area = PI * r * r;
  printf("Circumference of the circle is : %f ", circumference);
  printf("\nArea of the circle is : %f \n", area);


    return 0;
}