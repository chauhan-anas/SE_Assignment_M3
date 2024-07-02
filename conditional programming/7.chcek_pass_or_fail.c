#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5, total=0;
	float per;
	
	printf("\n\n\t entre markes for s1:");
	scanf("%d",&s1);
	printf("\n\n\t entre markes for s2:");
	scanf("%d",&s2);
	printf("\n\n\t entre markes for s3:");
	scanf("%d",&s3);
	printf("\n\n\t entre markes for s4:");
	scanf("%d",&s4);
	printf("\n\n\t entre markes for s5:");
	scanf("%d",&s5);
	
	if(s1<40)
		printf("\n\n\t fail");
	else if (s2<40)
		printf("\n\n\t fail");
	else if (s3<40)
		printf("\n\n\t fail");
	else if (s4<40)	
		printf("\n\n\t fail");
	else if (s5<40)
		printf("\n\n\t fail");
	else
	{
					
	
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t percentage %f", per);
	
	if(per>=40)
		printf("\n\n\t  pass ");
		
	else
		printf("\n\n\t fail ");
		
	}
}
