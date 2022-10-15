#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double d = (a+b+c)/2.0;
	printf("%.2f",sqrt(d*(d-a)*(d-b)*(d-c)));
	return 0;
	
}
