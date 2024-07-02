#include<stdio.h>
main()
{
	int m=72,p=65,c=51,total=188,mp=137;
	printf("\n\n\t eligibility critaria :");
	printf("\n\n\t markes in maths>=65 :");
	printf("\n\n\t markes in phy>=55 :");
	printf("\n\nt markes in chem>=50 :");
	printf("\n\n\t markes in maths & physics>=140 :");
	printf("\n\n\t total markes >=190:");
	
	printf("\n\n\t.............\n");
	printf("\n\n\t marks in maths=%d",m);
	printf("\n\n\t marks in phy=%d",p);
	printf("\n\n\t marks in chem=%d",c);
	printf("\n\n\t marks in maths & physics=%d",mp);
	printf("\n\n\t total markes=%d",total);
	
	if(m>=65 && p>=55 && c>=50 && total>=190 && mp>=137)
		printf("\n\n\t you are eligible");
	else
		printf("\n\n\t you are not eligible");	


}
