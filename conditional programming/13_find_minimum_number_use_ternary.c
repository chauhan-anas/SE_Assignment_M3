#include<stdio.h>
main()
{
	int a,b,c,min;
	printf("\n\n\t entre three number:");
	scanf("%d %d %d",&a,&b,&c);
	
	min=(a<b)?(a<c?a:c):(b<c?b:c);
	printf("\n\n\t minumum number %d",min);
}
