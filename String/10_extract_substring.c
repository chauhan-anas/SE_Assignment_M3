/*10. Write a program in C to extract a substring 
from a given string*/

#include<stdio.h>
main()
{
	char n[20];
	int j,p,l;
	
	printf("Enter the string=");
	scanf("%s",&n);
	
	printf("Enter the start pos=");
	scanf("%d",&p);
	
	printf("Enter the length=");
	scanf("%d",&l);
	
		for(j=p;j<=p+l;j++)
		{
			printf("%c",n[j]);
		}
	
}
