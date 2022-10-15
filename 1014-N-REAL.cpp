#include<stdio.h>
int main(){
   int x,y,z,max,min,med;
   scanf("%d %d %d",&x,&y,&z);
   max=x;
   if(y>max)
   max=y;
   if(z>max)
   max=z;
   min=x;
   if(y<min)
   min=y;
   if(z<min)
   min=z;
   if((x>=y&&x<=z)||(x>=z&&x<=y))
   med=x;
    if((y>=x&&y<=z)||(y>=z&&y<=x))
   med=y;
    if((z>=y&&z<=x)||(z>=x&&z<=y))
   med=z;
   printf("%d %d %d",min,med,max);
   return 0;
   
}
