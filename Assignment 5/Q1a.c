#include <stdio.h>

int main(){
    int i,j;
    for ( i = 1; i <= 4; i ++){
        for ( j = 1; j <= i; j++){
            if(j <= i){
                printf("*\t");
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }


    return 0;
}