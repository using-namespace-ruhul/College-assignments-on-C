//WACP to delete all vowels from a sentence.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main(){
      char str[100];
     printf("Enter the string:\n");
     fgets(str,100,stdin);
     int i = 0;
     int n = strlen(str);
     while(str[i]!='\0'){
          if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
          {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
                   || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                 {
                       for(int j = i ; str[j]!='\0' ; j++ ){
                             str[j]=str[j+1];
                       }
                 }
          }
          i++;
     }
     printf("After deleting all the vowels from the string: \n");
     puts(str);
 
return 0;
}