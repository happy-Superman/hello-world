#include<stdio.h>
int main()
{ int dl;
  double m;
  scanf("%d",&dl);
  if(dl<=200)
  m=0.4*dl;
  if(dl>=201&&dl<=400)
  m=80+0.45*(dl-200);
  if(dl>=401)
  m=170+(dl-400)*0.7;
  printf("%.2f",m);
  return 0;
}
