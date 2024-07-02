#include<stdio.h>
main()
{
	char a;
	printf("\n\n\t input a character: ");
	scanf("%c",&a);
	
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u')
		printf("\n\n\t character is vowel");
	else if(a=='A'|| a=='E'|| a=='I'|| a=='O'||a=='U')
		printf("\n\n\t character is vowel");
	else
		printf("\n\n\t character is not vowel");	
}
