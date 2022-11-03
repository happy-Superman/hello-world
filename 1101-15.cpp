#include<stdio.h>
#include<math.h>
int main(){
	int  n;
	double a,b,c,t;

	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		t=b*b-4*a*c;
		if(t>0)
		 {
		 printf("%.1f,%.1f\n",(-b+sqrt(t))/(2.0*a),(-b-sqrt(t))/(2.0*a));}
		if(t==0)
		 {
		 printf("%.1f\n",-b/(2.0*a));}
		if(t<0)
		{
		 printf("error\n");}
	}
	return 0;
}
