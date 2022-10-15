#include <stdio.h>
int main(){
	double kg,m,b;
	scanf("%lf %lf",&kg,&m);
	b=kg/(m*m);
	if(b<18.5)
	printf("Underweight");
	if(b>=18.5&&b<24)
	printf("Normal");
	if(b>=24)
	printf("%.1f\n Overweight",b);
	return 0;
}
