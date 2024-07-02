/*12. Write a program in C to find the number of times a 
given word 'is' appears in the given string. */

#include<stdio.h>
main()
{
	char n[30];
	int i,q=0;
	printf("Enter the string=");
	gets(a);
	printf("\n String=");
	puts(a);
	
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]=='i')
		{
			i++;
			if(n[i]=='s')
			{
				q++;
			}
		}
	}
	printf("%d",q);
}
