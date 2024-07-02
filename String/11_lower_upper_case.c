/*11. Write a program in C to read a sentence and replace 
lowercase characters with uppercase and vice versa.*/

#include<stdio.h>
main()
{
	char n[20];
	int i;
	
	printf("Enter the string=");
	scanf("%s",&n);
	
	for(i=0;n[i]!=0;i++)
	{
		printf("%c",n[i]-32);
	}
}
