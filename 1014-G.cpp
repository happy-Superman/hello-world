#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf",&a);
	if(a<100)
	b=a;
               if(a>=100&&a<200) b=a*0.95;
                  if(a>=200&&a<500) b=a*0.9;
                     if(a>=500&&a<1000) b=a*0.85;
                        if(a>=1000) b=a*0.8;
               printf("%.1f",b);
               return 0;
	
}
