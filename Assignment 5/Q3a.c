#include<stdio.h>

int main(){
        int i,j,k;
    for( i = 1; i <= 4; i++){
        k=i;
        for( j = 1; j<=7; j++){
            if ( j>=4-(i-1) && j<=4+(i-1)){
                   printf("%d\t", k);
                   j<4?k++:k--;
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }


    return 0;
}