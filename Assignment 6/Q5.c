#include <stdio.h>
#include <math.h>
#include<stdbool.h>
 
bool checkPronic(int x)// function to check wheather the given number is pronic or not.
{
 
    for (int i = 0;
            i <= (int)(sqrt(x));
            i++)
 
        if (x == i * (i + 1))
        return true;
 
    return false;
}
 
int main()
{
  int n, res;
  printf("Enter any number: ");
  scanf("%d", &n);
  res = checkPronic(n);
  if(res == 1)
  printf("%d is a pronic number\n", n);
  else
  printf("%d is not a pronic number\n", n);
    
    return 0;
}