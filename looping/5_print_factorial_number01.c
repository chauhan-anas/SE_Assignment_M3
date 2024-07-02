//wap to print factorial of given number.
#include<stdio.h>
main()
{
	int i,n,f;
	printf("\n\n\t enter the value of n :");
	scanf("%d",&n);
	
	i=1;
			
			while(i<=n)
			{
				f=f*i;
				i++;
			}
			
			printf("\n\n\t factorial is %d is %d",n,f);
}
