#include<stdio.h>

int main(){
    int num, temp, res = 0, rem;
    printf("Enter any number to check if it is an armstrong number: ");
    scanf("%d", &num);
    temp = num;

    while( temp != 0)
    {
        rem = temp % 10;  // 153 % 10 = 3 // 15 % 10 = 5 // 1 % 10 = 1
        res = res + (rem * rem * rem); // 0 = 0 + 27 = 27 //  27 + 125 = 152 // 152 + 1 = 153
        temp = temp / 10; // 153 / 10 = 15 // 15 / 10 = 1 // 1 / 10 = 0
    }

    if( res == num )
    {
        printf("%d is an armstrong number\n", num);
    }
    else
    {
        printf("%d is not an armstrong number\n", num);
    }

    return 0;
}