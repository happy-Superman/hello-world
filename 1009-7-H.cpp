#include<stdio.h>
int main()
{ int a,h,m,s;
   scanf("%d",&a);
   h=a/3600;
   m=(a-h*3600)/60;
   s=(a-m*60-h*3600);
   printf("%d %d %d",h,m,s);
   return 0;
}
