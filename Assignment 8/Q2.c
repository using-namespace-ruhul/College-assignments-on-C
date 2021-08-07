//C program to print the maximum and minimum element of an array.

#include<stdio.h>

int maxElement(int arr[], int n){
      int max = 0;
      for(int i=1; i<n; i++){
            if(arr[i]>arr[max])
            max = i;
      }
return arr[max];
}

int minElement(int arr[], int n){
      int min = 0;
      for(int i=1; i<n; i++){
            if(arr[i]<arr[min])
            min = i;
      }
return arr[min];
}
 
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
    printf("The elements of the array:\n");
    for(int i=0; i<n; i++){
    printf("%d\t", arr[i]);
    } 
    printf("\n");  
    printf("The maximum element is: %d", maxElement(arr,n)); 
    printf("\nThe minimum element is: %d", minElement(arr,n)); 
    printf("\n");

return 0;
}