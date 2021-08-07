#include<stdio.h>
 
int main(){
int *p;
int **ptr;
int a=20;
p=&a;
ptr=&p;
printf("%d", a);
printf("\n%d", &a);
printf("\n%d", *p);
printf("\n%d", p);
printf("\n%d", ptr);
printf("\n%d", *ptr);
printf("\n%d", **ptr);
//int a[5]={6,7,8,9,10};
//p=a;
//p=++p;
//for(int i=0; i<5; i++){
//      //printf("%d ", a[i]);
//      printf("\n%p ", (p+i));
//}
//printf("%d", *(p++));
//printf("%d", *(++p));
 
return 0;
}