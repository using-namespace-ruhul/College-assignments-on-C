#include<stdio.h>

int fact(int n){
    if(n<=1)
    return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the number which factorial is to be determined: ");
    scanf("%d", &n);
    int F = fact(n);
    printf("The factorial of %d is %d\n", n,F);
 
return 0;
}