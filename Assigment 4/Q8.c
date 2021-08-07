#include<stdio.h>

int main()
{
    int num, i,temp ;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    temp = num / 7;
    for( i = 1; i <= num ; i++ )
    {
        if(i % 7 != 0)
        {
            printf("%d\n", i);
        }
    }
    for(int j = i ; j <= i + (temp - 1); j++)
    {
         if(i % 7 != 0)
         {
        printf("%d\n", j);
         } 
    }

    return 0;
}