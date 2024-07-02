/*5. Write a program in C to compare two strings 
without using string library functions.*/ 

#include<stdio.h>
main()
{
	char n[30],j[30];
	int i,temp=0;
	
	printf("Enter the string=");
	scanf("%s",&n);
	
	printf("Enter the string=");
	scanf("%s",&j);
	
	for(i=0;n[i]!='\0'&&j[i]!='\0';i++)
	{
		
		if(n[i]!=j[i])
		{
			temp++;
		}
	}
	
		if(temp>=1)
			printf("Strings are not same ");
		else
			printf("Strings are same");
}
