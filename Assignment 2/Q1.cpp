//Q1. WACP to print the size and range of various data types.
#include <stdio.h>
#include <math.h>

int range_of(int r){
  int min, max, temp;
  r*=8;
  temp = pow(2,r-1);
  min = -temp;
  max = temp - 1;
  printf("\n  %d to %d", min, max);
 
 return 0;
}


int main(){
   int a = sizeof(int), b = sizeof(float), c = sizeof(double), d = sizeof(char);
    printf ("The size of int is %d bytes", a);
    range_of(a);
    printf ("\nThe size of float is %d bytes", b);
    range_of(b);
    printf ("\nThe size of double is %d bytes", c);
    range_of(c);
    printf ("\nThe size of character is %d bytes", d);
    range_of(d);


    return 0;
    }
    