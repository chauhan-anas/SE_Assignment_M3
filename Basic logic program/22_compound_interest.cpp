
#include<stdio.h>
main()
{


int p,r,t,A,ci;
	printf("\n\n\t entre initial amount :");
	scanf("%d",&p );
	printf("\n\n\t entre interest rate :");
	scanf("%d", &r);
	t=(1+(r%100));
	A=p*t*t;
	printf("\n\n\t Final interest is %d", A);
	ci=A-p;
	printf("\n\n\t compound interest is %d", ci);
}
