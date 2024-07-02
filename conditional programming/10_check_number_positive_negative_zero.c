#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t entre any number :");
	scanf("%d",&n);
	
	if(n==0)
		printf("\n\n\t number is zero...:");
	else if(n>0)
		printf("\n\n\t number is positive..:");
	else
		printf("\n\n\t number is negative...:");		
}
