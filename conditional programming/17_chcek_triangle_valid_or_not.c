#include<stdio.h>
main()
{
	int anga,angb,angc,sum;
	printf("\n\n\t input three angle of triangle :");
	scanf("%d %d %d",&anga,&angb,&angc);
	
	sum=anga+angb+angc;
	
	if(sum==180)
		printf("\n\n\t triangle is valid");
	else
		printf("\n\n\t triangle is not valid");	
}
