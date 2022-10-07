#include<stdio.h>
int main()
{float r,h,l,s,sq,v,sv;
float pi=3.1415926;
printf("请输入圆的半径和圆柱的高：");
scanf("%f%f",&r,&h);
l=2*pi*r;
s=pi*r*r;
sq=4*pi*r*r;
v=3/4*pi*r*r*r;
sv=s*h;
printf("周长：%6.2f",l);
printf("圆的面积：%6.2f",s);
printf("圆球的表面积：%6.2f",sq);
printf("圆球的体积：%6.2f",v);
printf("圆柱的体积：%6.2f",sv);
return 0;
}
