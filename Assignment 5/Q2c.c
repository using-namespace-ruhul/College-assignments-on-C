#include<stdio.h>

int main(){
    int clrscr();
        int i,j,k;
    for( i = 1; i <= 5; i++){
        k=i;
        for( j = 1; j<=9; j++){
            if ( j>=5-(i-1) && j<=5+(i-1)){
                   printf("%d\t", k);
                   j<5?k--:k++;
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}