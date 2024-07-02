//14.Write a program in C to combine two strings manually

#include<stdio.h>
main()
{
	char m[20],n[20];
	int i;
	
	printf("Enter the string=");
	scanf("%s",&m);
	
	printf("Enter the string=");
	scanf("%s",&n);
	
	for(i=0;m[i]!='\0';i++)
	{
		printf("%c",m[i]);
	}
		printf("%s",n);
}
