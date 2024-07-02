// find area of  rectangular prism

#include<stdio.h>
main()

{  
   int w,l,h,A;
   printf("\n\n\t entre the length,width & height :");
   scanf("%d %d %d" ,&w, &l, &h);
   A=2*((w*l)+(h*l)+(h*w));
   printf("\n\n\t area of rectangular prism is : %d" ,A);
}
