//Q2. C program to read a text and count all occurances
// of a particular word.
#include<stdio.h>
#include<string.h>
 
int main(){
      int i=0,j=0,count = 0;
    char str[100],copy[20];
    printf("Enter a sentence:");
    gets(str);
    char word[20];
    printf("Enter the word:");
    gets(word);
    while(str[i]!='\0'){
          while(str[i]!=' '&&str[i]!='\0'){
              copy[j]=str[i];
              ++j;
              ++i;
          }
          copy[j]='\0';
          j=0;
          if((strcmp(copy,word))==0){
             count+=1;
          }
          if(str[i]=='\0')
          break;
          else
          i++;
    }
    printf("The number of occurences of %s is %d\n", word, count);
 
return 0;
}