#include<stdio.h>
int main()
{  int yl,pz;
   double z1,z2;
   char lx;
   scanf("%d %d %c",&yl,&pz,&lx);
   if(pz==92)
   z1=6.95*yl;
   if(pz==95)
   z1=7.44*yl;
   if(pz==97)
   z1=7.93*yl;
  
  if(lx=='m')
   z2=z1*0.92;
   if(lx=='e')
   z2=z1*0.95;
   printf("%.2f",z2);
   return 0;
}
