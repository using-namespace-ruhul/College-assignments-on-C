#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
 
int main(){
    int x,y;
    printf("Enter the 2 numbers: ");
    scanf("%d%d", &x, &y);
    int G = gcd(x,y);
    printf("The gcd of %d and %d is : %d\n", x,y,G);

 
return 0;
}