#include<stdio.h>
int main()
{  int m1,m2,m3,min;
 scanf("%d %d %d",&m1,&m2,&m3);
	min=m1;
 if(m1>m2)
 min=m2;
 if(m2>m3)
 min=m3;
 printf("%d",min);
 return 0;
}
