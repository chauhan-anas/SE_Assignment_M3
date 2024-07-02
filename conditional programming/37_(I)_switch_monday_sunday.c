#include<stdio.h>
main()
{
	int week;
	
	printf("\n\n\t entre a week number");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1 :
			printf("\n\n\t monday");
			break;
		case 2 :
			printf("\n\n\t tuesday");
			break;
		case 3 :
			printf("\n\n\t wednesday");
			break;
		case 4 :
			printf("\n\n\t thursday");
			break;
		case 5 :
			printf("\n\n\t friday");
			break;
		case 6 :
			printf("\n\n\t saturday");
			break;
		case 7 :
			printf("\n\n\t sunday");
			break;
		default :
			printf("\n\n\t invalid number");							
	}
}
