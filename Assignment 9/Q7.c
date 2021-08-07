// WACP to find whether a String is Palindrome or not.
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
 
int main(){
          char str[100];
     printf("Enter the string:\n");
     fgets(str,100,stdin);
     int n = strlen(str)-1;
     int copy_of_str1[n];
      strcpy(copy_of_str1,str);
    int lo=0, hi=n-1, temp;
    while(lo<=hi){
          temp = str[lo];
          str[lo] = str[hi];
          str[hi] = temp;
          lo++;
          hi--;
    }
    int ret = strcmp(copy_of_str1,str);
    if(ret == 0){
          printf("Yes palindrome\n");
    }
    else
          printf("Not palindrome\n");
 
return 0;
}