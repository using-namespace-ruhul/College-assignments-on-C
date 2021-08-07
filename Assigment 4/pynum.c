#include<stdio.h>

int main(){
    int i, j, n, k=1;
    printf("enter number of rows: ");
    scanf("%d", &n);

    for(i=0; i < n; i++){
        for(j=1; j <= ((2*n)-1); j++){
            if( j>=n-i && j<=n+i){
                while( k<= (i+1)*(i+1)){
                    printf("%d\t", k);
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