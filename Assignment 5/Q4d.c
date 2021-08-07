#include<stdio.h>

int main(){
    int i, j,k,l;
    for(i=1; i<=4; i++){
        for(j=1; j<=(2*i)-1; j++){
            printf("%d", i+(i-1));
        }
        for(k=1; k<=7; k++){
            if(k>=2*i && k<=7){
                printf(" ");
            }
        }
        for(l=1; l<=7; l++){
            if(l>=(5-i) && l<=(3+i)){
                printf("%d", i+(i-1));
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=3; i>=1; i--){
        for(j=1; j<=(2*i)-1; j++){
            printf("%d", (2*i)-1);
        }
        for(k=1; k<=8; k++){
            if(k>=(2*i)-1 && k<=7){
                printf(" ");
            }
        }
        for(l=1; l<=5; l++){
            if(l>=(4-i) && l<=(2+i)){
                printf("%d", (2*i)-1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}