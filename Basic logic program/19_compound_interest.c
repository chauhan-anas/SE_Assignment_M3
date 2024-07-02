// find compound interst

#include<stdio.h>
main()
{


int p,r,t,A;
	printf("\n\n\t entre initial amount :");
	scanf("%d",&p );
	printf("\n\n\t entre interest rate :");
	scanf("%d", &r);
	t=(1+(r%100));
	A=p*t*t;
	printf("\n\n\t compund interest is %d", A); 
}
