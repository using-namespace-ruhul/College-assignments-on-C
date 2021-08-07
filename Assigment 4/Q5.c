#include<stdio.h>

int main(){
    int num, temp, res = 0,rem;
    printf("Enter any number to check if it is palindrome: ");
    scanf("%d", &num);
    temp = num;
    
    while( temp != 0)
    {
        rem = temp % 10; // 121 % 10 = 1 // 12 % 10 = 2 // 1 % 10 = 1
        res = (res * 10) + rem; // 0 * 10 + 1 = 1 // 1 * 10 + 2 = 12 // 12 * 10 + 1 = 121
        temp /= 10; // 121 / 10 = 12 // 12 / 10 = 1 // 1 / 10 = 0 
    }

    if ( res == num)
    {
        printf("%d is palindrome\n", num);
    }
    else
    {
        printf("%d is not palindrome\n", num);
    }


    return 0;
}