#include<stdio.h>

int main(){
    /*float a = 0.9;//here 0.9 will be stored with 0.900(with double precision)
    if (a == 0.9)
    printf("hello");
    else 
    printf("Hi")//so Hi will be printed*/
    //int a = 10;
    //printf("%d, %d, %d, %d", a, a++, ++a, a++);
    float a = 1.0;//cannt insert float in switch
    switch(a)
    { 
        deafault:
        printf("all");
      case 1.2: 
      printf("Hello");
      case 0.7:
      printf("Hi");
    }

    return 0;
}