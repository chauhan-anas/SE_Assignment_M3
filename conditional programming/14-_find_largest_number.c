#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t input three number :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("\n\n\t max number is = %d",a);
	else if(b>a && b>c)	
		printf("\n\n\t max number is = %d",b);
	else
		printf("\n\n\t max number is = %d",c);
			
}
