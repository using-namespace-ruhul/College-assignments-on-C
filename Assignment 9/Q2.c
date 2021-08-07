//Q2. Write your own strcpy(), strcat(), strlen (), strcmp() functions in C.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void stringCopy();//for strcpy()
void stringAdd();//for strcat()
int stringLength();//for strlen()
int stringCompare();//strcmp()

//Function to find the length of a string.
int stringLength(char* Str){
      int i;
   for (i = 0; Str[i] != '\0'; i++);
return i;
}

//Function to copy one string to another.
void stringCopy(char* str1, char* str2){
     for(int i=0; str1[i]!='\0'; i++){
           str1[i]=str2[i];
     }
     puts(str1);
}

//Function to compare 2 strings.
int stringCompare(char* str1, char* str2){
      int i=0;
      while(str1[i]!='\0' || str2[i]!='\0'){
            if(str1[i]==str2[i])
            i++;
            break;
      }
      if(str1[i]==str2[i])
      return 0;
      else
      return 1;
}

//Function to add 2 strings.
void stringAdd(char* str1, char* str2){
      int i=0;
      while(str1[i]!='\0'){
            i++;
      }
      for(int j=0 ; str2[j]!='\0'; i++,j++){
            str1[i] = str2[j];
      }
      int n = stringLength(str1);
      str1[n] = '\0';
      puts(str1);
}
 
int main(){
    char str1[100], str2[100];


    printf("Enter Str1 :");gets(str1);
    printf("Enter Str2 :");gets(str2);

    printf("\nStr1 is :");puts(str1);
    printf("\nStr2 is :");puts(str2);

    int n1 = stringLength(str1);
    int n2 = stringLength(str2);
    printf("\nSize of str1 is %d",n1);
    printf("\nSize of str2 is %d",n2);

    printf("\n\nAfter adding str2 on str1:\n");
    stringAdd(str1,str2);

    int ret = stringCompare(str1,str2);
    if(ret == 0){
    printf("\nStr1 is equal to Str2\n");
    }
    else{
    printf("\nStr1 is not equal to Str2\n");
    }
    
    printf("\nAfter copying str2 to str1:\n");
    stringCopy(str1,str2);
 
return 0;
}