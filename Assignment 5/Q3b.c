#include<stdio.h>

int main(){
    int i,j,n1=0, n2=1,sum=1;
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            if(i==1 && j==1){
                printf("%d", n1);
                continue;
            }
            if(j==4){
                    continue;
                }
            printf("%d\t", sum);
                sum = n1+n2;
                n1 = n2;
                n2 = sum;
                

        }
        printf("\n");
    }


    return 0;
}