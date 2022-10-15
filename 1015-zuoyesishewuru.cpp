#include<stdio.h>
int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	a= (int)(a*10+0.5)/10.0;
	b= (int)(b*10+0.5)/10.0;
	printf("%.1f",a+b);
	return 0;
}
