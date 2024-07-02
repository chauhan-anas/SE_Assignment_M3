//11. Accept 5 names from user at run time. 

#include<stdio.h>
main()
{
	int i;
	char name[20];
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter a Name[%d]: ",i+1);
		scanf("%s",&name[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Name[%d]: %s",i+1,name[i]);
	}
	
}
