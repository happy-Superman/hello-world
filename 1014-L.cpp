#include<stdio.h>
int main()
{  double lc,m1,m2;
   int time;
   scanf("%lf %d",&lc,&time);
   if(lc<=3)
   m1=10;
   if(lc>3&&lc<=10)
   m1=10+(lc-3)*2;
   if(lc>10)
   m1=24+(lc-10)*3;
   m2=(time/5)*2;
   printf("%.1f",m1+m2);
   return 0;
   
}
