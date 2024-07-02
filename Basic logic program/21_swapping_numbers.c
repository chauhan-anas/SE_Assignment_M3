#include<stdio.h>
main()

{ 
    int a,b,c;
    printf("\n\n\t Entre any two value :");
    scanf("%d %d", &a, &b);
    printf("\n\n\t........ Before swapping........:");
    printf("\n\n\t a=%d b=%d", a,b);
    
    printf("\n\n\t........swapping with 3rd varaible......");
    c=a;
    a=b;
    b=c;
    printf("\n\n\t a=%d b=%d", a,b);
    
	printf("\n\n\t........swapping without 3rd varaible......:");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n\t a=%d b=%d", a,b);
    
}
