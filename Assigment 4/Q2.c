#include<stdio.h>

int main(){
    int num,i = 1 ,fact = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    do{
       fact = fact * i; 
       i++;
    }while(i <= num);

printf("The factorial of %d is %d\n", num, fact);
    return 0;
}