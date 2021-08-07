#include<stdio.h>

int main(){
  int a,b,ch;
  printf("Enter the 1st number: ");
  scanf("%d", &a);
  printf("\nEnter the 2nd number: ");
  scanf("%d", &b);
  printf("\nChoose among 1 for addition , 2 for substraction , 3 for multiplication , 4 for division :  ");
  scanf("%d", &ch);

  switch(ch)
  {
      case 1 :
      printf("%d\n", a+b);
      break;
 
      case 2 :
      printf("%d\n", a-b);
      break;
  
      case 3 :
      printf("%d\n", a*b);
      break;
  
      case 4 :
      printf("%d\n", a/b);
      break;
      
  }




    return 0;
}