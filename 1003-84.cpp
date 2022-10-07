#include<stdio.h>
#include<math.h>
int main()
{double a,b,c,disc,q,p,x1,x2;
scanf("%lf%lf%lf",&a,&b,&c);
disc=b*b-4*a*c;
p=-b/(2*a);
q=sqrt(disc)/(2*a);

if(disc<0)
 printf("This equation hasn't real root");
else
 {
 x1=p+q;
 x2=p-q;
 printf("x1=%7.2f\nx2=%7.2f",x1,x2);
 }
 return 0;
}
