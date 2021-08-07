#include <stdio.h>

int main(){
int num, sum = 0, i = 1;
printf("Enter any number: ");
scanf("%d", &num);

    while(i <= (num + (num - 1)) )
    {
        if(i % 2 != 0)
        {
        sum = sum + i;
        }
        i++;
    }
    
printf("The sum of first %d odd numbers is %d\n ", num, sum);
    return 0;
}