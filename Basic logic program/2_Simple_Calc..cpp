// Way to make simple calc

#include<stdio.h>
main()

{ 
     int a,b,c;
     /*a=10;
     b=25;*/
     
     printf("\n\n\t Input Any Two Values : ");
     scanf("%d %d", &a,&b);
     
     //Addition 
     c=a+b;
     printf("\n\n\t Addition of %d & %d = %d", a,b,c );
     
     //substraction
     c=a-b;
     printf("\n\n\t Substraction of %d & %d = %d" ,a,b,c);
     
     //multiplication
     c=a*b;
     printf("\n\n\t Multiplication of %d & %d= %d ", a,b,c);
     
     // Division
     c=a/b;
     printf("\n\n\t Division of %d & %d= %d", a,b,c);
     
     //Modulo
     c=a%b;
     printf("\n\n\t Modulo of %d & %d= %d", a,b,c);
     
}
