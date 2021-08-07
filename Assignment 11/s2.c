#include<stdio.h>
 
int main(){
int *p;
int a[5]={12,13,14,15,16};
p=a[3];
printf("%d", (p+2));
printf("\n");
for(int i=0; i<5; i++){
      printf("\n%d", p+i);
}

return 0;
}