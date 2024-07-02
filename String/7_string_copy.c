/* 7. Write a program in C to copy one string to 
another string.*/ 
#include<stdio.h>
main()
{
	char m[20],n[20];
	int i;
	
	printf("Enter the string=");
	scanf("%s",&m);
	printf("\n\ta=%s",m);
	
	for(i=0;m[i]!='\0';i++)
	{
		n[i]=m[i];
	}
	printf("\n\t b=%s",n);
}
