//Q1. WACP to reverse a given string (of characters) without using library function.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main(){
    char str[100];
    printf("Enter the string:\n");
    fgets(str,100,stdin);
    printf("Before reversing:\n");
    puts(str);
    int n = strlen(str)-1;
    int lo=0, hi=n-1, temp;
    while(lo<=hi){
          temp = str[lo];
          str[lo] = str[hi];
          str[hi] = temp;
          lo++;
          hi--;
    }
    printf("After reversing:");
    puts(str);
 
return 0;
}