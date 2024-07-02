#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n\t entre any teo value :");
	scanf("%d %d", &a,&b);
	printf("\n\n\t.....Before swapping...... :");
	printf("\n\n\t a=%d b=%d", a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n\n\t.....Aftre swapping.... :");
	printf("\n\n\t a=%d b=%d",a,b);
}
