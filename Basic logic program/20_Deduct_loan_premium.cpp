#include<stdio.h>
main()

{ 
   int msal,ip,li,resal;
   printf("\n\n\t entre your monthly salary :");
   scanf("%d", &msal);
   ip=msal*0.1;
   printf("\n\n\t insurance premium %d :", ip);
   li=msal*0.1;
   printf("\n\n\t loan interest %d :", li);
   resal=msal-ip-li;
   printf("\n\n\t remaining amount %d :", resal);
}
