#include<stdio.h>
int main(){
	int h,m,s,v,h1,m1,s1,v1,h2,m2,s2;
	double a,v2;
	scanf("%d:%d:%d %d %d:%d:%d %d %d:%d:%d",&h,&m,&s,&v,&h1,&m1,&s1,&v1,&h2,&m2,&s2);
	
	a=1.0*(v1-v)/((h1-h)*3600+(m1-m)*60+(s1-s));
	v2=v1+a*((h2-h1)*3600+(m2-m1)*60+(s2-s1));
	printf("%.1f",v2);
	return 0;	
}
