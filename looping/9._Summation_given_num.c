//9. Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include<stdio.h>
main()
{
	int n,rem,sum;


	printf("\n\t Enter the Number=");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\t Summation =%d",sum);
}
