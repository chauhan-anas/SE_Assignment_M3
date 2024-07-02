#include<stdio.h>
main()
{
	int ch;
	printf("\n\n\t entre any character..:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
		printf("\n\n\t %c is uppercase ",ch);
	else if(ch>='a' && ch<='z')	
		printf("\n\n\t %c is lowercase",ch);
	else if(ch>='0' && ch<='9')
		printf("\n\n\t %c is digit",ch);
	else
		printf("\n\n\t %c is special charecter",ch);		
}

