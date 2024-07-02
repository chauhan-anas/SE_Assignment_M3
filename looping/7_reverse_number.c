//write to programe find out the max from given number.
#include<stdio.h>
main()
{
	int n,i, j,rem;
	printf("entre the any number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		if(rem>j)
		{
			j=rem;
		}
		
		n=n/10;
	}
	
	printf("max number from given number : %d",j);
}
