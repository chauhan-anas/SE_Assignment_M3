// Finding odd even number,sum of odd even numbers & count of odd even number.
#include<stdio.h>
main()
{
	int i,n=10,c=0,t=0,odd=0,even=0;
	
	printf("\n\n\t.......even numbers:........\n");
	
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf(" %d",i);
			even=even+i;
			t++;
			
		}
	}
	
	printf("\n\n\t.........odd number:......\n");
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf(" %d",i);
			odd=odd+i;
			c++;
		}
	}
	printf("\n\n\t........total even and odd number.......");
	printf("\n\n\t total count of even number : %d",t);
	printf("\n\n\t total count of odd number : %d",c);
	
	printf("\n\n\t.......total sum of odd and even number.......");
	printf("\n\n\t total sum of even number : %d ",even);
	printf("\n\n\t total sum of odd number : %d",odd);
}

