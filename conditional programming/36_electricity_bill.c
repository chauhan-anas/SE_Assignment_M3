#include<stdio.h>
main()
{
	int unit;
	float amt,total_amt,sur_charge;
	
	printf("\n\n\t entre unit consumed :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amt=unit*0.50;
	}
	
 else if(unit>50 && unit<=150)
	{
		amt=unit*0.75;
	}
else if(unit>100 && unit<=250)
	{
		amt=unit*1.20;
	    
	}
else 
	{
		amt=unit*1.50;
				
	}
	
	sur_charge=amt*0.2;
	total_amt=amt+sur_charge;			
	
	printf("\n\n\t Electricity bill %.2f",total_amt);
	
}
