// wap to print number is reverse order.
#include<stdio.h>
main()
{
	int n,rem;
	
	printf("\n\n\t enter the number to reverse :\ ");
	scanf("%d",&rem);
	
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n=n/10;
	}
}
