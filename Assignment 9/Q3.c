//WACP to find the number of vowels, consonants, digits and special characters.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main(){
     char str[100];
     printf("Enter the string:\n");
     fgets(str,100,stdin);
     //puts(str);
     int vow=0, cons=0, dig=0, sc=0,i=0;
     while(str[i]!='\0'){
           if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
                   || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                  vow++;
                else 
                  cons++;
           }
           else if(str[i]>='0' && str[i]<='9')
                dig++;
          else
               sc++;
         i++;
     }
     printf("\nNumber of vowels are: %d\n", vow);
     printf("Number of consonants are: %d\n", cons);
     printf("Number of digits are: %d\n", dig);
     printf("Number of special characters are: %d\n", sc);
 
return 0;
}