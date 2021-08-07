#include <stdio.h>

int getPower(int x, int n){// function to get x to the power r
    int pow = 1, i;
    for(i=1; i<=n ; i++){
        pow = pow * x;
    }

    return pow;
}

int main(){
    int x, r , res;
    printf("Enter the base and the power: ");
    scanf("%d%d", &x, &r);
    res = getPower(x,r);
    printf("The desired value of %d to the power %d is %d\n", x,r,res);

    return 0;
}