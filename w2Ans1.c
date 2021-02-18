#include <stdio.h>
#include <string.h>
//Compiler version gcc  6.3.0

int main()
{
  int a, s=0,r;
  printf("Enter a number:");
  scanf("%d",&a);
  while(a)
  {
    r=a%10;
    a=a/10;
    s+=r;
   } 
    printf("Sum of the digits of the number is %d", s);
     return 0;
}