#include<stdio.h>

int main(){
    int i, j, ncr,k;
    for(i=0; i<=4; i++){
        for(j=1; j<=4-i; j++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            if( k==0 ){
                ncr = 1;
               printf("%2d", ncr);
            }
            else{
                ncr = ncr * (i-k+1)/k;
                printf("%2d", ncr);
            }
        }
        printf("\n");
    }

    return 0;
}