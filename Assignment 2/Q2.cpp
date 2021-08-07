#include<stdio.h>

int main(){
  int num, sum = 0, temp;
  printf("Enter a five digit number: ");
  scanf("%d", &num);

  temp = num % 10;//12345 % 10 = 5
  sum += temp;//0 + 5 = 5
  num = num / 10;//12345 / 10 = 1234

  temp = num % 10;//1234 % 10 = 4
  sum += temp;//0 + 5 + 4 = 9
  num = num / 10;//1234 / 10 = 123

  temp = num % 10;//123 % 10 = 3
  sum += temp;//0 + 5 + 4 + 3 = 12
  num = num / 10;//123 / 10 = 12

  temp = num % 10;//12 % 10 = 2
  sum += temp;//0 + 5 + 4 + 3 + 2 = 14
  num = num / 10;//12 / 10 = 1

  temp = num % 10;//1 % 10 = 0
  sum += temp;//0 + 5 + 4 + 3 + 2 + 1 = 15

  printf("\n\n\tThe sum is: %d ", sum);
  

    return 0;
}