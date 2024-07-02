#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	printf("\n\n\t input number n1..:");
	scanf("%d",&n1);
	printf("\n\n\t input number n2...:");
	scanf("%d",&n2);
	
	printf("\n\n\t .........Basic arithmatic.......");
	printf("\n\n\t press + for Addition...");
	printf("\n\n\t press - for substraction..");
	printf("\n\n\t press * for multiplication..");
	printf("\n\n\t press / for division....");
	printf("\n\n\t press e for exit....");
	
	printf("\n\n\t input your choice: ");
	scanf("%d",&choice);
	
	if(choice=='+')
		printf("\n\n\t Addition = %d",n1+n2);
	else if(choice=='-')
		printf("\n\n\t substraction = %d",n1-n2);
	else if(choice=='*')
		printf("\n\n\t multiplication = %d",n1*n2);
	else if(choice=='/')
		printf("\n\n\t division = %d",n1/n2);
	else if(choice=='e')
		exit(0);
	else
		printf("\n\n\t invalid choice..:");					
}
