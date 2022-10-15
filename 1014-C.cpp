#include <stdio.h>
int main()
{   int x,xz1,xz2,a,b,c,d;
   scanf("%d",&x);
   if(x%2==0)
    xz1=1;
    else
    xz1=0;
   if(x>4&&x<=100)
    xz2=1;
    else
    xz2=0;
   if(xz1==1&&xz2==1)
   a=1;
   else
   a=0;
   if((xz1==1||xz2==1)||(xz1==1&&xz2==1))
   b=1;
   else
   b=0;
   if((xz1==1&&xz2==0)||(xz1==0&&xz2==1))
   c=1;
   else
   c=0;
   if(xz1==0&&xz2==0)
   d=1;
   else
   d=0;
   printf("%d %d %d %d",a,b,c,d);
}
