#include<stdio.h>

int main(){
    int i, j, k;
    for(i=1; i<=4; i++){
        k=1;
        for(j=1; j<=7; j++){
           if(j<=(2*i)-1){
               printf("%d", k);
               j<i?k++:k--;
           }
        }
        printf("\n");
    }
    for(i = 1; i < 4; i++){
        k=1;
        for( j = 1; j < 6; j++){
            if( j <= 5-(2*(i-1))){
                printf("%d", k);
                j<((2+i)/i)?k++:k--;
            }
        }
        printf("\n");
    }


    return 0;
}