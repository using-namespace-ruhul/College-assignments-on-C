//Q4. WACP using pointers to read in an array of 
//integers and print its elements in reverse order.
#include<stdio.h>
 
int main(){
int arr[100];
int n,i;
int *ptr;
printf("Enter the size of the array: ");
scanf("%d", &n);
ptr = arr;
printf("Enter the elements of the array: \n");
for(i=0; i<n; i++){
      scanf("%d", ptr);
      ptr++;
}
printf("Before reversing:\n");
ptr = arr;
for(i=0; i<n; i++){
      printf("%d ", *ptr);
      ptr++;
}
printf("\nAfter reversing:\n");
ptr = &arr[n-1];
for(i=0; i<n; i++){
      printf("%d ", *ptr);
      ptr--;
}
printf("\n");
 
return 0;
}