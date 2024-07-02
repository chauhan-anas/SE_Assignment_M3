#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("\n\n\t entre three number :");
	scanf("%d %d %d",&a,&b,&c);
	
	
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("\n\n\t maximum number %d ",max);
}
