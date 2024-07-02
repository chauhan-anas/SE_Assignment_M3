//12. Program of Armstrong Number in C Using For Loop.

#include<stdio.h>

main()
{
	int n,rem,i,temp,sum=0;
	
	printf("\n\tEnter the Number=");
	scanf("%d",&n);
	temp=n;
		
	for(i=n;i>0;i=i/10)
		{
			rem=i%10;
			sum=sum+(rem*rem*rem);
		}
	
		if(sum==temp)
			printf("number is armstrong");
			
		else
			printf("number is not armstrong");
}
