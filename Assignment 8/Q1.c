//C program to search an element in an array.

#include<stdio.h>

int search(int arr[], int n, int x){
      for(int i=0; i<n; i++){
            if(arr[i]==x){
                return i;
                break;
            }
      }
return -1;
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
    int x;
    printf("Enter the elemnt to be searched: \n");
    scanf("%d", &x);
    if(search(arr,n,x)>=0)
    printf("The element %d is at index %d\n",x, search(arr,n,x));
    else
    printf("Element not found\n");
 
return 0;
}