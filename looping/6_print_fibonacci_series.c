// wap to print fibonacci series up to given number.
#include<stdio.h>
main()
{
	int a,b,c,n,i;
	printf("\n\n\t enter number to print fibonacci :");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("\n\n\t %d %d",a,b);
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
