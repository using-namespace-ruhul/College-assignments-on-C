#include<stdio.h>

int main(){
    int i, j, count=1;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d\t", count%2);
            count++;
        }
        if(i%2==0){
            count = 1;
        }
        else{
            count = 0;
        }
        printf("\n");
    }


    return 0;
}