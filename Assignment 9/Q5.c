//WACP to print the acronym of a name e.g. print D.V.C. for Damoder Valley Corporation.
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    int n = strlen(str);
    char acro[n];
    int i,j=0;
    acro[j] = str[0];
    acro[++j] = '.';
    ++j;
    for(int i=1 ; str[i]!='\0'; i++){
          if(str[i]==' '){
              acro[j]=str[i+1];
              acro[j+1]='.';
              j+=2;
          }
    }
    int n2 = strlen(acro);
    acro[n2]='\0';
    printf("The acronym of %s is %s\n", str, acro );
 
return 0;
}