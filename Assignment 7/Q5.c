#include<stdio.h>

void TOH(int n, char s, char d, char a){
    if(n==1)
    printf("\nMove from %c to %c\n", s,d);
    else{
        TOH(n-1,s,a,d);
        printf("\nMove from %c to %c\n", s,d);
        TOH(n-1,a,d,s);
    }
}
 
int main(){
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);
    TOH(n,'A','C','B');

 
return 0;
}