// wap to print table given number.
#include<stdio.h>
main()
{
	int i,n;
	printf("\n\n\t enter the number for table :");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t %d * %d= %d",n,i,n*i);
	}
}
