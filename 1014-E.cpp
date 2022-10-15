#include<stdio.h>
int main()
{ int a,b,c,d,e,f,g,h;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a%2==0)
  e=0;
  else
  e=1;
    if(b%2==0)
  f=0;
  else
  f=1;
    if(c%2==0)
  g=0;
  else
  g=1;
    if(d%2==0)
  h=0;
  else
  h=1;
  printf("%d %d %d %d",e,f,g,h);
  return 0;
}
