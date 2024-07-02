#include<stdio.h>
main()
{
	int month;
	printf("\n\n\t entre a month number :");
	scanf("%d",&month);
	switch(month)
	{
		case 1 :
			printf("\n\n\t january ");
			break;
		case 2 :
			printf("\n\n\t february");
			break;
		case 3 :
			printf("\n\n\t march");
			break;
		case 4 :
			printf("\n\n\t april");
			break;
		case 5 :
			printf("\n\n\t may");
			break;
		case 6 :
			printf("\n\n\t june");
			break;
		case 7 :
			printf("\n\n\t july");
		case 8 :
			printf("\n\n\t augest");
			break;
		case 9 :
			printf("\n\n\t september");
			break;
		case 10 :
			printf("\n\n\t octomber");
			break;
		case 11 :
			printf("\n\n\t november");
			break;
		case 12 :
			printf("\n\n\t december");
			break;
		default :
			printf("\n\n\t invalid number");											
	}
		
}
