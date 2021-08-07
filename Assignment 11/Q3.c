//Q3. Write a program to illustrate the use of arrays within 
//a structure using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int roll;
};
int main()
{
	struct student *s;
	int i,n;
	printf("Enter the number of records you wish to enter: ");
	scanf("%d",&n);
	s = (struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("Enter the roll number and name of student no. %d: ", i+1);
		scanf("%d %s",&(s+i)->roll,(s+i)->name);
	}
	printf("Now showing the students info:\n");
	printf("|\tRoll\t|\tName\t|\n");
	printf("___________________________________\n");
	for(i=0;i<n;i++)
	{
		printf("|\t%d\t|%10s\t|\n",(s+i)->roll,(s+i)->name);
	}
	printf("___________________________________\n");
	return 0;
}