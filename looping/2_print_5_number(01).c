#include<stdio.h>
main()
{
	int i, n[5];
	for(i=0;i<5;i++)
	{
		printf("\n\n\t entre a number[%d]: ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t number[%d]: %d",i+1,n[i]);
	}
	
	
	
}
