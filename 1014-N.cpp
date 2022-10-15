#include<stdio.h>
int main()
{ int a,b,c,max,med,min;
  scanf("%d %d %d",&a,&b,&c);
  max = a;
  if(a<b)
  max =b;
  if(b<c)
  {
  max =c;
  med =b;
  min =a;}
  printf("%d %d %d",min,med,max);
  return 0;
  
}
