#include <stdio.h>
int main()
{  int a,b;
scanf("%d,%d",&a,&b);
double c= (double) a;
printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d*%d=%d\n",a,b,a*b);
printf("%d/%d=%.1f",a,b,c/b);
return 0;
}
