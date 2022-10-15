#include<stdio.h>
int main()

{int n,b1,b2,b3,j1,j2,j3,zj,m1,m2,m3,min;
 scanf("%d\n%d %d\n%d %d\n%d %d",&n,&b1,&j1,&b2,&j2,&b3,&j3);
 if(n%b1==0)
 m1=(n/b1)*j1;
 else
 m1=(n/b1+1)*j1;
  if(n%b2==0)
 m2=(n/b2)*j2;
 else
 m2=(n/b2+1)*j2;
  if(n%b3==0)
 m3=(n/b3)*j3;
 else
 m3=(n/b3+1)*j3;
 min=m1;
 if(min>m2)
 min=m2;
 if(min>m3)
 min=m3;
 printf("%d",min);
 return 0;
}
