//WACP to perform dictionary sorting.
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
 
int main(){
      char str[5][100];
      int res,i,j;
    printf("Enter the string:\n");
    for(int i=0; i<5; i++){
         fgets(str[i],100,stdin);
    }
    int temp[5];
    
    for(i=0; i<5; i++){
          for(j=0; j<4-i; j++){
              res = strcmp(str[j],str[j+1]);
              if(res>0){
                    strcpy(temp,str[j]);
                    strcpy(str[j],str[j+1]);
                    strcpy(str[j+1],temp);
              }
          }
    }
    printf("After sorting:\n");
    for(int i=0; i<5; i++){
        puts(str[i]);
    }
 
return 0;
}