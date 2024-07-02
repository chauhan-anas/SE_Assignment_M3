#include<stdio.h>
main()
{
	int week;
	printf("\n\n\t entre week number :");
	scanf("%d",&week);
	
	if(week==1)
			printf("\n\n\t monday");
		
	else if(week==2)
	
		printf("\n\n\t tuesday");
		
	else if(week==3)
	
		printf("\n\n\t wenesday");
		
	else if(week==4)
	
		printf("\n\n\t thursday");
	else if(week==5)
		printf("\n\n\t friday");
	
	else if(week==6)
		printf("\n\n\t saturday");
	else if(week==7)
		printf("\n\n\t sunday");
	else
		printf("\n\n\t invalid number ");							
}
