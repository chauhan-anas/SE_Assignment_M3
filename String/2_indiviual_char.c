/*2. Write a program in C to separate individual 
characters from a string.*/

#include<stdio.h>
main()
{
	char a[30];
	int i;
	
	printf("Enter the string=");
	scanf("%s",&a);
	
	strupr(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c ",a[i]);
	}
}
