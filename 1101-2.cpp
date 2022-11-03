#include<stdio.h>
int main(){
	int n,a,t1,b;
	double time;
	scanf("%d",&n);
	for(int i =1;i<=n;i++)
	{
		scanf("%d%d%d",&a,&t1,&b);
		time=1.0*a*t1*60/(b-a);
		printf("%.1f",time);
		
	}
	return 0;
}
