#include <stdio.h>

int main(){
   int a, b, flag, i, j;
   printf("Enter initial and final range:");
   scanf("%d%d", &a, &b);
   flag = 0;
   for(i=a+1 ; i<b; ++i)
   {
       
       for(j = 2; j <= i/2; ++j){
           if (i % j == 0){
               flag = 1;
               break;
           }
           
       }
       if (flag == 0){
           printf("%d\n", i);
       }
   }
   

    return 0;
}