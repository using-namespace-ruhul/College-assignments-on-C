#include<stdio.h>
#include<math.h>

int main(){
    int p, n;
    float r, CI;
    printf("Enter the amount of principal: ");
    scanf("%d", &p);
    printf("Enter the time(Years): ");
    scanf("%d", &n);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    CI =  (p*(pow((1 + r/100), n) - 1 ));
    printf("Amount of compund interest is: %f \n", CI);

    return 0;
}