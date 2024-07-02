//18. Write a C Program to Print the Multiplication Table of N.

#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&n);
	
	for(i=1;i<=15;i++)
	{
		printf("\n %d  *  %d= %d",n,i,n*i);
	}
}
