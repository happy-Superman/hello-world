#include<stdio.h>
int main()
{float a,b,t;
scanf("%f,%f",&a,&b);
if(a>b)
{t=a;
a=b;
b=t;
}
printf("%6.2f<%6.2f",a,b);
return 0;
}
