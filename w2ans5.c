#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int count,i,j;
  scanf("%d", &count);
  for(int i=1;i<=count;i++)
  {
  for(j=1;j<=count;j++)
  {
  if(i==j||i+j==count+1)
  printf("*");
   else
    printf(" ");
  }
  printf("\n");
 } 
  return 0;
}
