#include<stdio.h>
union book{
char bname [30],author[20];
};
void main()
{
	union book B;
	printf("Enter the Book's name: ");
	fgets(B.bname,30,stdin);
	printf("Name of the book: %s",B.bname);
	printf("Enter the author:");
	fgets(B.author,20,stdin);
	printf("Author's name:%s",B.author);
}
