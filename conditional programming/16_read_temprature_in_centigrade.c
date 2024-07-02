#include<stdio.h>
main()
{
	int t;
	printf("\n\n\t input resd temprature in centigrade :");
	scanf("%d",&t);
	
	if(t<0)
		printf("\n\n\t freezing weather");
	else if(t>=0 && t<10)
		printf("\n\n\t very cold weather");
	else if(t>=10 && t<20)
		printf("\n\n\t cold weather");
	else if(t<=20 && t<30)
		printf("\n\n\t normal in temp");
	else if(t<=30 && t<40)
		printf("\n\n\t its hot");
	else
		printf("\n\n\t very hot");					
}
