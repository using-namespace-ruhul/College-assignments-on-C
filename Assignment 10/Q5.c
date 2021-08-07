//Q5. WACP to sort strings abc, deh, bac in 
//ascending order using array of pointers.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
      char *c[3];
      int i, n=3;
      void sort(int n, char *c[]);
      for(i=0; i<n; i++){
            printf("Enter string no. %d: ", i+1);
            c[i] = (char *)malloc(3*sizeof(char));
            scanf("%s", c[i]);
            printf("\n");
      }
     sort(n,c);
      printf("\nSorted strings are:\n");
      for(i=0; i<n; i++){
            printf("%d %s\n", i+1, c[i]);
      }
 
return 0;
}

void sort(int n, char *c[]){
      int i,j;
      char t[20];
      for(i=0; i<n-1; i++ ){
            for(j=i+1; j<n; j++){
                  if(strcmp(c[i],c[j])>0){
                        strcpy(t,c[j]);
                        strcpy(c[j],c[i]);
                        strcpy(c[i],t);
                  }
            }
      }
return;
}