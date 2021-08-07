//Q1. WACP that can maintain the name, roll, number 
//and marks of a class of students. The size of the class is variable.
// Include func- tion to compute the average marks of the class.

#include<stdio.h>

int average(int sum, int n);

int main(){

int n,i,sum=0;
printf("Enter the size of the class: ");
scanf("%d", &n);

struct class{
      char name[20];
      int roll;
      int marks;
}c[n];

for(i=0; i<n; i++){
      printf("Enter student %d name: ", i+1);
      scanf("%s", c[i].name);
      printf("Enter student %d roll: ", i+1);
      scanf("%d", &c[i].roll);
      printf("Enter student %d marks: ", i+1);
      scanf("%d", &c[i].marks);
      sum+=c[i].marks;
      printf("\n");
}

printf("Student's Information:\n\n");
      printf("||     Name    ||    Roll No.   ||    Marks   ||");
      printf("\n_________________________________________________\n");
for(i=0; i<n; i++){
      printf("||%9s    ||%8d       ||%8d    ||\n", c[i].name, c[i].roll, c[i].marks);     
}
printf("_________________________________________________\n");

printf("\nThe average marks of the class is %d\n", average(sum,n));
 
return 0;
}

int average(int sum, int n){//function to calculate the average.
     int avg = sum/n;
return avg;
}