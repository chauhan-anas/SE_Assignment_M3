#include<stdio.h>
main()

{
	int height;
	printf("\n\n\t input the height of person(in centimetres) :");
	scanf("%d",&height);
	
	if (height<150)
		printf("\n\n\t the person is smaller : ");
	else if ((height>=150) && (height<=170))
		printf("\n\n\t the person is average :");
	else if ((height>=170) && (height<=190))
		printf("\n\n\t the person is taller :")	;
	else
		printf("\n\n\t abnormal height");		
}
