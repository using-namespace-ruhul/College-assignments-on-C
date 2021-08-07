//C program to reverse an array.

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
    printf("The elements of the array before reversing:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    } 
    printf("\n"); 
    int low = 0, high = n-1;
    while(low<high){
        arr[low]^=arr[high];
        arr[high]^=arr[low];
        arr[low]^=arr[high];
        low++;
        high--;
    }
    printf("The elements of the array after reversing:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    } 
   printf("\n"); 
 
return 0;
}