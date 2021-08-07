#include<stdio.h>

int main(){
    int i, j, k;
    for(i=1; i<=5; i++){
        k = 1;
        for(j=1; j<=5; j++){
            if(j <= i){
                while (k <= i){
                printf("%d\t", k );
                k++;
            }
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }



    return 0;
}