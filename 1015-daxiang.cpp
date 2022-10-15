#include<stdio.h>
int main(){
	int h,r;
	double v;
	scanf("%d %d",&h,&r);
	v=3.14*r*r*h;
	
	printf("%d",20000/(int)v+1);
	return 0;
} 
