#include <stdio.h>
#include <string.h>
//Compiler version gcc  6.3.0

 int main()
{
    char str[100];
    int i,Char;
    Char=0;
    printf("Enter the word to count the number of letters\n");
    gets(str);
    i=0;
    while(str[i] != '\0'){
        if(str[i]!=' ')
        {
            Char++;
        }
         i++;
    }
    printf("The total letters of the word= %d",Char);
   return 0;

}