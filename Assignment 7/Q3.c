#include<stdio.h>

int fib(int n){
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}

void nonFib(int n){
     int fibn, fibm;
     for(int i=0; i<n; i++){
        fibn = fib(i);
        fibm = fib(i+1);
        for(int j=fibn+1; j<fibm; j++){
            if(j<=n)
               printf("%d\n", j);
            else
               break;
        }
     }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    nonFib(n);
 
return 0;
}