//13.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int n,i,f=1;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("\n\tFactorial of is %d",f);
}
