#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The swapped value of a is %d", a);
    printf("\nThe swapped value of b is %d\n", b);

    return 0;
}