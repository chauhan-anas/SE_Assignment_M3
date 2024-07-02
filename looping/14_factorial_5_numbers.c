#include<stdio.h>
main()
{
	int i,n[5],f,j;
	for(i=0;i<5;i++)
	{
		
		printf("\n\n\t enter number[%d]: ",i+1);
		scanf("%d",&n[i]);
		f=1;
		for(j=1;j<=n[i];j++)
		{
			f=f*j;
			
		}
		printf("\n\n\t factorial of %d is : %d",n[i],f);
		
	}
}
