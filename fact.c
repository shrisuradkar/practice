#include<stdio.h>


int main()
{

  int fact=1;
  int num, i;


  printf("Enter the Number");
  scanf("%d",&num);
   
    for(i=1;i<=num;i++)
     {
        fact=fact*i;
     }
  printf("Factorial %d",fact);
}
