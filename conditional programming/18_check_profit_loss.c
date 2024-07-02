#include<stdio.h>
main()
{
	int cprice,sprice,plamt;
	printf("\n\n\t input cost price :");
	scanf("%d",&cprice);
	printf("\n\n\t input seeling price :");
	scanf("%d",&sprice);
	
	if(sprice>cprice)
	{
		plamt=sprice-cprice;
		printf("\n\n\t profit amount : %d");	
	}	
	else if(cprice>sprice)
	{
		plamt=cprice-sprice;
		printf("\n\n\t loss amount : %d");
	}
	else
		printf("\n\n\t no profit,no loss");		
}
