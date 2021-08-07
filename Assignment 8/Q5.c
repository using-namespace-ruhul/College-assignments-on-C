//C program to print multiplication of 2 matrices and print the transport of the resultant matrix.

#include<stdio.h>

void transpose(int arr[3][3]);
void multMatrix(int a[3][3], int b[3][3]){
    int mul[3][3],i,j,k;
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                mul[i][j]=0;
                for(k=0; k<3; k++){
                      mul[i][j] += a[i][k]*b[k][j];
                }
          }
    }
    printf("The multiplied matrix is: \n");
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                printf("%d\t", mul[i][j]);
          }
          printf("\n");
    }
    transpose(mul);
}

void transpose(int arr[3][3]){
      int i,j;
    printf("\nThe transposed matrix is: \n");
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                printf("%d\t", arr[j][i]);
          }
          printf("\n");
    }
    printf("\n");
}
 
int main(){
    int i,j;
    int a[3][3], b[3][3];
    printf("Enter the values of matrix a: \n");
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                scanf("%d", &a[i][j]);
          }
    }
    printf("\n");
    printf("The matrix a is:\n");
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                printf("%d\t", a[i][j]);
          }
          printf("\n");
    }
    
    printf("\n");
    printf("Enter the values of matrix b: \n");
    for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                scanf("%d", &b[i][j]);
          }
    }
    printf("\n");
    printf("The matrix b is:\n");
        for(i=0; i<3; i++){
          for(j=0; j<3; j++){
                printf("%d\t", b[i][j]);
          }
          printf("\n");
    }
     printf("\n");
    multMatrix(a,b);
 
return 0;
}