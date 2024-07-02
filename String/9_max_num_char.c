/*9. Write a program in C to find the maximum number of 
characters in a string.*/

#include<stdio.h>
main()
{
	char n[20];
	int i,j,c,max=0;
	
	printf("Enter the string=");
	scanf("%s",&n);

	for(i=0;n[i]!='\0';i++)
	{
			c=1;
		for(j=i+1;n[j]!='\0';j++)
		{
			if(n[i]==n[j])
			{
				c++;	
			}
		}
		if(c>max)
		{
			max=c;
		}
		
	}
	printf("same character=%d",max);
}
