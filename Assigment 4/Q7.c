#include<stdio.h>

int main()
{
    int num, i;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for( i = 1; i <= (num * 7); i++ )
    {
        if(i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}