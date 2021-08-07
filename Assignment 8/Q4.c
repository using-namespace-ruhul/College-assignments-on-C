//C program to sort an array.

#include<stdio.h>
 
int main(){
      int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The elements of the array before sorting:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    } 
    printf("\n");
    for(int i=0; i<n; i++ ){
        for(int j=i+1; j<n; j++){
              if(arr[j]<arr[i]){
                  arr[i]^=arr[j];
                  arr[j]^=arr[i];
                  arr[i]^=arr[j];
              }
        }
    } 
    printf("The elements of the array after sorting:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }    
    printf("\n"); 
return 0;
}