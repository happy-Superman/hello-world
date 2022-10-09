#include<stdio.h>
int main()
{  int a,kw,bw,sw,gw;
   scanf("%d",&a);
   kw=a/1000;
   bw=a/100%10;
   sw=a/10%10;
   gw=a%10;
   printf("%d",kw+bw+sw+gw);
   return 0;
}
