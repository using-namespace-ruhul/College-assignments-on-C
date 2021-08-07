#include <stdio.h>

int main(){
int p, t;
float r, SI;
printf("Enter the principal amount: ");
scanf("%d", &p);
printf("Enter the rate of interest: ");
scanf("%f", &r);
printf("Enter the time(years): ");
scanf("%d", &t);
SI = (p * r * t)/100;
printf("Simple interest is %f\n", SI);

    return 0;
}